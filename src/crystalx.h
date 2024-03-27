#pragma once
#include <QCloseEvent>
#include <QDockWidget>
#include <QFutureWatcher>
#include <QMainWindow>
#include <QTextEdit>
#include <QtConcurrent>
#include <QMessageBox>

#include "crystalcontroller.h"
#include "fingerprintwindow.h"
#include "glwindow.h"
#include "jobparameters.h"
#include "project.h"
#include "surfacecontroller.h"
#include "viewtoolbar.h"

#include "gaussianinterface.h"
#include "nwcheminterface.h"
#include "occinterface.h"
#include "orcainterface.h"
#include "psi4interface.h"
#include "tontointerface.h"
#include "xtbinterface.h"

#include "animationsettingsdialog.h"
#include "celllimitsdialog.h"
#include "chargedialog.h"
#include "closecontactsdialog.h"
#include "depthfadingandclippingdialog.h"
#include "energycalculationdialog.h"
#include "frameworkdialog.h"
#include "infoviewer.h"
#include "planegenerationdialog.h"
#include "preferencesdialog.h"
#include "surfacegenerationdialog.h"
#include "wavefunctioncalculationdialog.h"

// background tasks
#include "taskmanager.h"
#include "taskmanagerwidget.h"

#include "ui_crystalx.h"

const bool ENABLE_EXPERIMENTAL_FEATURES = false;
const bool EXPERIMENT_BUTTON_IS_TOGGLE = false;

const int MAXHISTORYSIZE = 10;

const QString CIF_EXTENSION = "cif";
const QString CIF2_EXTENSION = "cif2";
const QString CIFDATA_EXTENSION = "cxc";
const QString ATOMDATA_EXTENSION = "cxd";
const QString SURFACEDATA_EXTENSION = "cxs";
const QString ENERGYDATA_EXTENSION = "cxe";
const QString PROJECT_EXTENSION = "cxp";
const QString XYZ_FILE_EXTENSION = "xyz";

const int STATUSBAR_MSG_DELAY =
    2000; // length of time /msec that messages appear for in status bar

class Crystalx : public QMainWindow, public Ui::Crystalx {
  Q_OBJECT

public:
  Crystalx();

  void loadExternalFileData(QString);

public slots:
  void generateSurface(const JobParameters &, std::optional<Wavefunction>);
  void generateSurfaceNew(isosurface::Parameters);
  void getWavefunctionParametersFromUser(QVector<AtomId>, int, int);
  void generateWavefunction(const JobParameters &);
  void calculateMonomerEnergy(const JobParameters &);
  void returnToJobRequiringWavefunction();
  void tontoJobFinished(TontoExitStatus, JobType);
  void occJobFinished(bool, JobType);
  void orcaJobFinished(bool, JobType);
  void xtbJobFinished(bool, JobType);
  void wavefunctionJobFinished(bool);
  void jobRunning();
  void jobCancelled(QString);
  void uncheckContactAtomsAction();
  void displayFingerprint();
  void passCurrentCrystalToFingerprintWindow();
  void passCurrentSurfaceVisibilityToSurfaceController();
  void calculateEnergies(const JobParameters &, const QVector<Wavefunction> &);
  void showInfo(InfoType);
  void showTaskManagerWidget();
  void updateInfo(InfoType);
  void setInfoTabSpecificViewOptions(InfoType);
  void tidyUpAfterInfoViewerClosed();
  void updateStatusMessage(QString);
  void updateProgressBar(int, int);
  void clearStatusMessage();

protected slots:
  void closeEvent(QCloseEvent *);

private slots:
  bool resetElementData();
  void openFile();
  void processRotTransScaleAction(QAction *);
  void processMeasurementAction(QAction *);
  void resetSelectionMode();
  void fileFromHistoryChosen();
  void clearFileHistory();
  void openFilename(QString);
  void removeFileFromHistory(const QString &);
  void updateWindowTitle();
  void quit();
  void showTontoStdin();
  void showTontoStdout();
  void showGaussianStdout();
  void showNWChemStdout();
  void showPsi4Output();
  void showOccOutput();
  void getSurfaceParametersFromUser();
  void updateCloseContactOptions();
  void setMoleculeStyleForCurrent();
  void setEllipsoidStyleWithProbabilityForCurrent();
  void toggleDrawHydrogenEllipsoids(bool);
  void updateMenuOptionsForScene();
  void updateMenuOptionsForSurface(Surface *);
  void newProject();
  void saveProject();
  void saveProjectAs();
  void exportAs();
  void exportSelectedSurface();
  QString suggestedProjectFilename();
  void showPreferencesDialog();
  void helpAboutActionDialog();
  void generateCells();
  void clearCurrent();
  void clearAll();
  void setAnimateScene(bool);
  void toggleAnimation(bool);
  void selectAtomsOutsideRadius();
  void setShowAtomsWithinRadius();
  void updateCrystalActions();

  void showInfoViewer();
  void showCifFile();
  void gotoCrystalExplorerWebsite();
  void gotoHowToCiteCrystalExplorer();

  void showDepthFadingOptions();
  void showClippingOptions();

  void cloneSurface();

  void allowActionsThatRequireSelectedAtoms();
  void allowCloneSurfaceAction();
  void allowCalculateEnergiesAction();
  void showEnergyCalculationDialog();
  void calculateVoidDomains();

  void showEnergyFrameworkDialog();
  void cycleEnergyFrameworkBackwards();
  void cycleEnergyFramework(bool cycleBackwards = false);

  void showCrystalPlaneDialog();

  void setFragmentCharges();

  void updateSurfaceControllerForNewProperty();
  void handleTransformationMatrixUpdate();
  void backgroundTaskFinished();

  void taskManagerTaskComplete(TaskID);
  void taskManagerTaskError(TaskID, QString);
  void taskManagerTaskAdded(TaskID);
  void taskManagerTaskRemoved(TaskID);

  void handleStructureChange();

private:
  void init();
  bool readElementData();
  void initStatusBar();
  void initMainWindow();
  void initMenus();
  void initMoleculeStyles();
  void initGlWindow();
  void initFingerprintWindow();
  void initInfoViewer();
  void initInterfaces();
  void createRecentFileActionsAndAddToFileMenu();
  void addExitOptionToFileMenu();
  void createToolbars();
  void createDockWidgets();
  void createSurfaceControllerDockWidget();
  void createCrystalControllerDockWidget();
  void initConnections();
  void initMenuConnections();
  void initActionGroups();
  void addFileToHistory(const QString &);
  void loadProject(QString);
  void updateRecentFileActions(QStringList);
  void updateWorkingDirectories(const QString &);
  void processCif(QString &);
  void loadXyzFile(const QString &);

  void showLoadingMessageBox(QString);
  void hideLoadingMessageBox();
  void processSuccessfulJob();
  void processSuccessfulEnergyCalculation();
  void initSurfaceActions();

  void setBusy(bool);
  void setBusyIcon(bool);
  void disableActionsWhenBusy(bool);
  void enableGenerateSurfaceAction(bool);
  void enableCloneSurfaceAction(bool);
  void enableCalculateEnergiesAction(bool);

  void cloneVoidSurface(Scene *);
  void cloneGeneralSurface(Scene *);

  bool overrideBondLengths();
  void showStatusMessage(QString);
  void viewFile(QString, int width = 620, int height = 600,
                bool syntaxHighlight = false);
  bool closeProjectConfirmed();
  void initPreferencesDialog();
  void initCloseContactsDialog();
  void enableExperimentalFeatures(bool);

  void colorHighlightHtml(QString &lineOfText, QString regExp,
                          QString htmlColor);
  void initDepthFadingAndClippingDialog();

  void readSurfaceFile();

  void returnToSurfaceGeneration();
  void returnToEnergyCalculation();

  void writeMorokumaInput(DeprecatedCrystal *);
  void generateSurfaceWithProductProperty(DeprecatedCrystal *);
  void tryCalculateAnotherEnergy();

  bool getCharges(DeprecatedCrystal *);
  bool getChargesFromUser(DeprecatedCrystal *);

  Project *project{nullptr};
  GLWindow *glWindow{nullptr};
  JobParameters jobParams;
  ViewToolbar *viewToolbar{nullptr};
  SurfaceController *surfaceController{nullptr};
  CrystalController *crystalController{nullptr};
  SurfaceGenerationDialog *m_oldSurfaceGenerationDialog{nullptr};
  SurfaceGenerationDialog *m_newSurfaceGenerationDialog{nullptr};
  WavefunctionCalculationDialog *wavefunctionCalculationDialog{nullptr};
  EnergyCalculationDialog *energyCalculationDialog{nullptr};
  FingerprintWindow *fingerprintWindow{nullptr};
  PreferencesDialog *preferencesDialog{nullptr};
  CloseContactDialog *m_closeContactDialog{nullptr};
  DepthFadingAndClippingDialog *depthFadingAndClippingDialog{nullptr};
  FrameworkDialog *frameworkDialog{nullptr};
  ChargeDialog *chargeDialog{nullptr};
  InfoViewer *infoViewer{nullptr};
  PlaneGenerationDialog *m_planeGenerationDialog{nullptr};

  TontoInterface *tontoInterface{nullptr};
  GaussianInterface *gaussianInterface{nullptr};
  NWChemInterface *nwchemInterface{nullptr};
  Psi4Interface *psi4Interface{nullptr};
  OccInterface *m_occInterface{nullptr};
  OrcaInterface *m_orcaInterface{nullptr};
  XTBInterface *m_xtbInterface{nullptr};

  QDockWidget *surfaceControllerDockWidget{nullptr};
  QDockWidget *crystalControllerDockWidget{nullptr};
  QAction *quitAction{nullptr};
  QAction *recentFileActions[MAXHISTORYSIZE];
  QVector<QAction *> moleculeStyleActions;
  QMessageBox *loadingMessageBox{nullptr};
  AnimationSettingsDialog *_animationSettingsDialog{nullptr};
  QAction *_clearRecentFileAction{nullptr};
  QMenu *_thermalEllipsoidMenu{nullptr};
  QAction *_drawHEllipsoidsAction{nullptr};

  QProgressBar *_jobProgress{nullptr};
  QToolButton *_jobCancel{nullptr};

  QWidget *fileWindow{nullptr};
  QTextEdit *fileViewer{nullptr};
  QVBoxLayout *fileViewerLayout{nullptr};

  QPair<QVector3D, QVector3D> _savedCellLimits;
  QMap<QString, DrawingStyle> m_drawingStyleLabelToDrawingStyle;
  QFutureWatcher<bool> m_futureWatcher;

  TaskManager * m_taskManager{nullptr};
  TaskManagerWidget * m_taskManagerWidget{nullptr};

};
