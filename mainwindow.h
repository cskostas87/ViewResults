#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include <QFileInfo>
#include "datatypes.h"
#include <QListWidgetItem>

using namespace std;

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void CreateConfusionMatrix();
    QList<ClassLabel> GetClasses();
    QStringList ReadTXTFile(QString fileName);
    void CreateGridStracture(QList<ClassLabel> classes);
    QList<Result> GetResults();
    void UpdateConfusionMatrix();
    void InitConfMatrix(QList<ClassLabel> classes);
    void UpdateCell(int row, int col);
    void ClearGui();
    void InitGui();
    void ColorConfMatrix(QList<ClassLabel> classes);
    void ClearPreviewImage();
    QString Instructions(QStringList instructions);
    void ShowCoefficients(QString imageName);
private slots:

    void on_pushButton_clicked();

    void on_grid_cellClicked(int row, int column);

    void on_imageNameList_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QPushButton *m_button;
};

#endif // MAINWINDOW_H




