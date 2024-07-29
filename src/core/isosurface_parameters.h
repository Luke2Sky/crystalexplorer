#pragma once
#include "chemicalstructure.h"
#include "molecular_wavefunction.h"
#include <QString>

namespace isosurface {

enum class Resolution { VeryLow, Low, Medium, High, VeryHigh, Absurd, Custom };

inline float resolutionValue(Resolution res) {
  switch (res) {
  case Resolution::VeryLow:
    return 1.5f;
  case Resolution::Low:
    return 0.8f;
  case Resolution::Medium:
    return 0.5f;
  case Resolution::VeryHigh:
    return 0.15f;
  case Resolution::Absurd:
    return 0.05f;
  case Resolution::Custom:
    return 0.0f;
  default: // Resolution::High:
    return 0.2f;
  }
}

inline const char *resolutionToString(Resolution res) {
  switch (res) {
  case Resolution::VeryLow:
    return "Very Low";
  case Resolution::Low:
    return "Low";
  case Resolution::Medium:
    return "Medium";
  case Resolution::High:
    return "High";
  case Resolution::VeryHigh:
    return "Very High";
  case Resolution::Absurd:
    return "Absurd";
  default:
    return "Custom";
  }
}

inline Resolution stringToResolution(const QString &res) {
    if (res.compare("Very Low", Qt::CaseInsensitive) == 0) return Resolution::VeryLow;
    if (res.compare("Low", Qt::CaseInsensitive) == 0) return Resolution::Low;
    if (res.compare("Medium", Qt::CaseInsensitive) == 0) return Resolution::Medium;
    if (res.compare("High", Qt::CaseInsensitive) == 0) return Resolution::High;
    if (res.compare("Very High", Qt::CaseInsensitive) == 0) return Resolution::VeryHigh;
    if (res.compare("Absurd", Qt::CaseInsensitive) == 0) return Resolution::Absurd;
    return Resolution::Custom; // Default case
}

enum class Kind {
  Promolecule,
  Hirshfeld,
  Void,
  ESP,
  ElectronDensity,
  DeformationDensity,
  Unknown
};

struct Parameters {
  Kind kind;
  float isovalue{0.0};
  float separation{0.2};
  ChemicalStructure *structure{nullptr};
  MolecularWavefunction *wfn{nullptr};
  Eigen::Isometry3d wfn_transform{Eigen::Isometry3d::Identity()};
};

struct Result {
  bool success{false};
};

QString kindToString(Kind);
QString defaultPropertyForKind(Kind);
Kind stringToKind(const QString &);

struct SurfacePropertyDescription {
  QString cmap;
  QString occName;
  QString displayName;
  QString units;
  bool needsWavefunction{false};
  bool needsIsovalue{false};
  bool needsOrbital{false};
  QString description;
};

struct SurfaceDescription {
  QString displayName{"Unknown"};
  QString occName{"unknown"};
  double defaultIsovalue{0.0};
  bool needsIsovalue{false};
  bool needsWavefunction{false};
  bool needsOrbital{false};
  bool needsCluster{false};
  bool periodic{false};
  QString units{""};
  QString description{"Unknown"};
  QStringList requestableProperties{"none"};
};

SurfaceDescription getSurfaceDescription(Kind);
QString getDisplayName(QString);

bool loadSurfaceDescriptionConfiguration(
    QMap<QString, SurfacePropertyDescription> &,
    QMap<QString, SurfaceDescription> &, QMap<QString, double> &);

} // namespace isosurface
