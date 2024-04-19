#pragma once
#include <QJsonObject>
#include <QMap>
#include <QObject>
#include <Eigen/Dense>
#include "isosurface_parameters.h"
#include <ankerl/unordered_dense.h>
#include "generic_atom_index.h"


class Mesh : public QObject {
    Q_OBJECT
    Q_PROPERTY(bool visible READ isVisible WRITE setVisible NOTIFY visibilityChanged)
    Q_PROPERTY(bool transparent READ isTransparent WRITE setTransparent NOTIFY transparencyChanged)
    Q_PROPERTY(QString selectedProperty READ getSelectedProperty WRITE setSelectedProperty NOTIFY selectedPropertyChanged)

public:
    struct ScalarPropertyRange {
	float lower{0.0};
	float upper{1.0};
	float middle{0.0}; // will only be used for some property color schemes
    };

    using VertexList = Eigen::Matrix<double, 3, Eigen::Dynamic>;
    using FaceList = Eigen::Matrix<int, 3, Eigen::Dynamic>;
    using ScalarPropertyValues = Eigen::Matrix<float, Eigen::Dynamic, 1>;
    using ScalarProperties = ankerl::unordered_dense::map<QString, ScalarPropertyValues>;
    using ScalarPropertyRanges = ankerl::unordered_dense::map<QString, ScalarPropertyRange>;

    enum class NormalSetting{
	Flat,
	Average
    };


    Mesh(QObject *parent = nullptr);

    Mesh(Eigen::Ref<const VertexList> vertices, Eigen::Ref<const FaceList> faces,
	    QObject *parent = nullptr);

    Mesh(Eigen::Ref<const VertexList> vertices,
	    QObject *parent = nullptr);

    [[nodiscard]] QString description() const;
    void setDescription(const QString &);

    [[nodiscard]] const auto &vertices() const { return m_vertices; }
    [[nodiscard]] inline auto numberOfVertices() const { return m_vertices.cols(); }

    [[nodiscard]] const auto &faces() const { return m_faces; }
    [[nodiscard]] inline auto numberOfFaces() const { return m_faces.cols(); }

    //normals
    [[nodiscard]] inline bool haveVertexNormals() const {
	return m_vertexNormals.cols() == m_vertices.cols();
    }

    void setVertexNormals(Eigen::Ref<const VertexList>);
    [[nodiscard]] inline const auto &vertexNormals() const {
	return m_vertexNormals; 
    }

    [[nodiscard]] VertexList computeFaceNormals() const;
    [[nodiscard]] VertexList computeVertexNormals(NormalSetting s = NormalSetting::Flat) const;

    // vertex properties
    [[nodiscard]] QStringList availableVertexProperties() const;
    [[nodiscard]] const ScalarProperties &vertexProperties() const;
    [[nodiscard]] bool haveVertexProperty(const QString &) const;
    void setVertexProperty(const QString &name, const ScalarPropertyValues &values);
    [[nodiscard]] const ScalarPropertyValues &vertexProperty(const QString &) const;

    [[nodiscard]] ScalarPropertyRange vertexPropertyRange(const QString &) const;
    void setVertexPropertyRange(const QString &, ScalarPropertyRange);

    //face properties
    [[nodiscard]] QStringList availableFaceProperties() const;
    [[nodiscard]] const ScalarProperties &faceProperties() const;
    [[nodiscard]] bool haveFaceProperty(const QString &) const;
    void setFaceProperty(const QString &name, const ScalarPropertyValues &values);
    [[nodiscard]] const ScalarPropertyValues &faceProperty(const QString &) const;


    [[nodiscard]] inline const auto &kind() const { return m_kind; }
    inline void setKind(isosurface::Kind kind) { m_kind = kind; }

    static Mesh *newFromJson(const QJsonObject &, QObject *parent=nullptr);
    static Mesh *newFromJsonFile(const QString &, QObject *parent=nullptr);

    [[nodiscard]] bool isVisible() const;
    void setVisible(bool visible);

    [[nodiscard]] double volume() const;
    [[nodiscard]] double surfaceArea() const;
    [[nodiscard]] double globularity() const;
    [[nodiscard]] inline double asphericity() const { return m_asphericity; }

    const QString &getSelectedProperty() const;
    bool setSelectedProperty(const QString &);

    [[nodiscard]] bool isTransparent() const;
    void setTransparent(bool);

    size_t rendererIndex() const;
    void setRendererIndex(size_t idx);

    void setAtoms(const std::vector<GenericAtomIndex> &idxs);
    [[nodiscard]] const std::vector<GenericAtomIndex> & atoms() const;
    bool haveChildMatchingTransform(const Eigen::Isometry3d &transform) const;

signals:
    void visibilityChanged();
    void transparencyChanged();
    void selectedPropertyChanged();

private:
    void updateVertexFaceMapping();
    void updateFaceProperties();
    void updateAsphericity();

    double m_volume{0.0}, m_surfaceArea{0.0}, m_asphericity{0.0}, m_globularity{0.0};

    bool m_visible{true};
    QString m_description{"Mesh"};
    VertexList m_vertices;
    FaceList m_faces;
    VertexList m_vertexNormals;

    VertexList m_faceNormals;
    ScalarPropertyValues m_faceAreas;
    ScalarPropertyValues m_faceVolumeContributions;

    std::vector<std::vector<int>> m_facesUsingVertex;

    std::vector<GenericAtomIndex> m_atoms;

    ScalarProperties m_vertexProperties;
    ScalarPropertyRanges m_vertexPropertyRanges;
    ScalarProperties m_faceProperties;

    bool m_transparent{false};
    size_t m_rendererIndex{0};

    QString m_selectedProperty;
    ScalarPropertyValues m_emptyProperty;
    isosurface::Kind m_kind{isosurface::Kind::Promolecule};
};
