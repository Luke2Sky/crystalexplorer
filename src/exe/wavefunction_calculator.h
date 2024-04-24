#pragma once
#include <QObject>
#include "taskmanager.h"
#include "chemicalstructure.h"
#include "wavefunction_parameters.h"

class WavefunctionCalculator: public QObject {
    Q_OBJECT
public:
    WavefunctionCalculator(QObject * parent = nullptr);
    
    void setTaskManager(TaskManager *);
    void start(wfn::Parameters);
    MolecularWavefunction *getWavefunction() const;

signals:
    void calculationComplete();

private slots:
    void wavefunctionComplete(wfn::Parameters, QString filename, QString name);

private:
    TaskManager * m_taskManager{nullptr};
    ChemicalStructure * m_structure{nullptr};
    MolecularWavefunction * m_wavefunction{nullptr};
};
