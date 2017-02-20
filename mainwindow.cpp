#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <QDebug>
#include <iostream>
#include <cstdlib>
#include <QTextEdit>
#include <QMessageBox>
#include <QLabel>
#include <QFileInfo>
#include <list>
#include <QImage>
#include <QGraphicsScene>
#include <QDesktopWidget>
#include <QtCharts>

using namespace QtCharts;
using namespace std;

QString pathName;
QList<Result> results;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitGui();

    QMessageBox myQMessageBox;
    QString text = "ViewResults \n "
                   "The selected Folder should contain the next files:\n\n"
                   "*** classes.txt: this file contains the names of classes per line\n"
                   "        e.g : person 1\n\n"
                   "*** results.txt: this file contains the results separated by comma\n"
                   "        e.g : path\\animal1.jpg, 3 , 4, 0.42, 2, 0.45, 3, 0.05 \n"
                   "(imagePath, truth label, predict label, coef1, predLabel2, coef2, predLabel3, coef3)\n\n";


    myQMessageBox.setText(text);
    QRect scr = QApplication::desktop()->screenGeometry();
    myQMessageBox.move(scr.center()-rect().center());
    myQMessageBox.exec();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreateConfusionMatrix()
{
    QList<ClassLabel> classes;
    // parse classes.txt file
    classes = GetClasses();
    // create grid
    CreateGridStracture(classes);
    //parse results.txt
    results = GetResults();
    // init conf matrix all zeros...
    InitConfMatrix(classes);
    //set values
    UpdateConfusionMatrix();
    //colorize grid
    ColorConfMatrix(classes);
}

void MainWindow::UpdateConfusionMatrix()
{
    QList<Result>::const_iterator stlIter;
    for( stlIter = results.begin(); stlIter != results.end(); ++stlIter )
    {
      //qDebug() << (*stlIter).getImageName();
        QString truth = (*stlIter).getTruthLabel();
        QString predict = (*stlIter).getPredictLabel1();

        int row = truth.toInt()-1;
        int column = predict.toInt()-1;

        UpdateCell(row,column);
    }
}

void MainWindow::UpdateCell(int row, int col)
{
    //cout << "row "<<row << "col "<< column << endl;
    QTableWidgetItem *tempItem = new QTableWidgetItem();
    tempItem = ui->grid->item(row,col);
    QString currentValue = tempItem->text();
    int newValue;
    newValue = currentValue.toInt() + 1;

    ui->grid->setItem(row, col, new QTableWidgetItem(QString::number(newValue)));
}

QList<Result> MainWindow::GetResults()
{
    QString fileName(pathName + "/results.txt");
    QStringList results = ReadTXTFile(fileName);
    QList<Result> resultList;
    QString text;

    foreach(text,results)
    {
        //qDebug() << text;
        QStringList temp = text.split(QRegExp(","));
        for (int i=0; i<8; i++)
        {
            if(i >= temp.length())
            {
                temp.append("0");
            }
        }
        Result tempResult(temp.at(0), temp.at(1), temp.at(2), temp.at(3), temp.at(4), temp.at(5), temp.at(6), temp.at(7));
        resultList.append(tempResult);
    }
    return resultList;
}

void MainWindow::InitConfMatrix(QList<ClassLabel> classes)
{
    for(int i=0; i<classes.size(); i++)
    {
        for(int j=0; j<classes.size(); j++)
        {
            ui->grid->setItem(i,j,new QTableWidgetItem("0"));
        }
    }
}

void MainWindow::ColorConfMatrix(QList<ClassLabel> classes)
{
    for(int i=0; i<classes.size(); i++)
    {
        for(int j=0; j<classes.size(); j++)
        {
            QTableWidgetItem *tempItem = new QTableWidgetItem();
            tempItem = ui->grid->item(i,j);
            QString currentValue = tempItem->text();
            if(currentValue.toInt() > 0)
            {
                ui->grid->item(i,j)->setBackground(Qt::yellow);
            }
            if(i == j)
            {
                ui->grid->item(i,j)->setBackground(Qt::green);
            }
        }
    }
}

void MainWindow::CreateGridStracture(QList<ClassLabel> classes)
{
    QString fileName(pathName + "/classes.txt");
    QStringList classesQTList = ReadTXTFile(fileName);
    QString header;
    for(int i=0; i<classesQTList.size(); i++)
    {
        ui->grid->insertColumn(0);
        ui->grid->insertRow(0);
        header.append(classesQTList.at(i));
        header.append(";");
    }
    ui->grid->setHorizontalHeaderLabels(header.split(";"));
    ui->grid->setVerticalHeaderLabels(header.split(";"));

    //ui->grid->horizontalHeader()->resizeSections(QHeaderView::Interactive);
    ui->grid->verticalHeader()->resizeSections(QHeaderView::Stretch);
}

QList<ClassLabel> MainWindow::GetClasses()
{
    QString fileName(pathName + "/classes.txt");
    QStringList classes = ReadTXTFile(fileName);
    QList<ClassLabel> classList;
    QString text;

    foreach(text,classes)
    {
        //qDebug() << classes.at(0);
        QStringList temp = text.split(QRegExp("\\s"));
        ClassLabel tempClassLabel(temp.at(0),temp.at(1));
        classList.push_back(tempClassLabel);
    }
    return classList;
}

QStringList MainWindow::ReadTXTFile(QString fileName)
{
    QFile inputFile(fileName);
    QStringList stringList;

    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString line = in.readLine();
          stringList.append(line);
       }
       inputFile.close();
    }
    return stringList;
}

void MainWindow::ClearPreviewImage()
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->clear();
    ui->previewImage->setScene(scene);
    QLayoutItem *child;
    ui->scrollArea->takeWidget();
    //while ((child = ui->scrollArea->layout()->takeAt(0)) != 0)
    //{
    //    delete child->widget(); // delete Layout Item's underlying widget
    //}
}

void MainWindow::ClearGui()
{
        pathName.clear();
        ui->dirPathTextEdit->clear();
        ui->imageNameList->clear();
        ClearPreviewImage();
        ui->grid->setRowCount(0);
        ui->grid->setColumnCount(0);
}

void MainWindow::InitGui()
{
    ui->dirPathTextEdit->setReadOnly(true);
    ui->grid->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void MainWindow::ShowCoefficients(QString imageName)
{
    Result tempResult;
    QList<Result>::const_iterator stlIter;
    for( stlIter = results.begin(); stlIter != results.end(); ++stlIter )
    {
      //qDebug() << (*stlIter).getImageName();
        tempResult =(*stlIter);
        if(tempResult.getImageName()==imageName)
        {
            break;
        }
    }

    //Result currResult = results.find
    QBarSet *set0 = new QBarSet("Coeff1");
    QBarSet *set1 = new QBarSet("Coeff2");
    QBarSet *set2 = new QBarSet("Coeff3");

    *set0 << tempResult.getcoefficient1().toFloat() << 0.0 << 0.0;
    *set1 << 0.0 << tempResult.getcoefficient2().toFloat() << 0.0;
    *set2 << 0.0 << 0.0 << tempResult.getcoefficient3().toFloat() ;

    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Coefficient Probabilities");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << tempResult.getPredictLabel1() << tempResult.getPredictLabel2()
               << tempResult.getPredictLabel3();
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->scrollArea->setWidget(chartView);
}

/* EVENTS   */

void MainWindow::on_pushButton_clicked()
{
    ClearGui();
    QString dirName = QFileDialog::getExistingDirectory(this, tr("Choose a Directory"),
                                                "/home/cskostas/Desktop",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);

    ui->dirPathTextEdit->setText(dirName);

    pathName = dirName;
    CreateConfusionMatrix();
}

void MainWindow::on_grid_cellClicked(int row, int column)
{
    QList<QString> imageNames;
    ui->imageNameList->clear();
    ClearPreviewImage();
    if (row != column)
    {
        QTableWidgetItem *tempItem = new QTableWidgetItem();
        tempItem = ui->grid->item(row,column);
        QString currentValue = tempItem->text();
        if(currentValue.toInt() > 0)
        {
            //qDebug() << row << column <<endl;
            QList<Result>::const_iterator stlIter;
            for( stlIter = results.begin(); stlIter != results.end(); ++stlIter )
            {
              //qDebug() << (*stlIter).getImageName();
                QString truth = (*stlIter).getTruthLabel();
                QString predict = (*stlIter).getPredictLabel1();

                int truthLabel = truth.toInt();
                int predictLabel = predict.toInt();
                if((row+1) == truthLabel && (column+1) == predictLabel )
                {
                    QString imageName = (*stlIter).getImageName();
                    imageNames.push_back(imageName);
                }
            }
            ui->imageNameList->addItems(imageNames);
        }
    }
}

void MainWindow::on_imageNameList_itemClicked(QListWidgetItem *item)
{
    QString selectedImageName = item->text();
    //qDebug() << selectedImageName;
    //QString fileName(pathName + "/images/"+selectedImageName);

    QImage *imageObject = new QImage();
    imageObject->load(selectedImageName);
    QPixmap image = QPixmap::fromImage(*imageObject);
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->previewImage->setScene(scene);
    ui->previewImage->update();

    ShowCoefficients(selectedImageName);
}

