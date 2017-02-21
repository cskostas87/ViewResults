/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *confGridLayout;
    QLabel *Truthlabel;
    QTableWidget *grid;
    QLabel *PredictLabel;
    QGridLayout *UpGridLayout;
    QPushButton *pushButton;
    QTextEdit *dirPathTextEdit;
    QGridLayout *BottomLayout;
    QLabel *label_2;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGraphicsView *previewImage;
    QListWidget *imageNameList;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(817, 727);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        confGridLayout = new QGridLayout();
        confGridLayout->setSpacing(6);
        confGridLayout->setObjectName(QStringLiteral("confGridLayout"));
        Truthlabel = new QLabel(centralWidget);
        Truthlabel->setObjectName(QStringLiteral("Truthlabel"));
        Truthlabel->setAlignment(Qt::AlignCenter);

        confGridLayout->addWidget(Truthlabel, 1, 0, 1, 1);

        grid = new QTableWidget(centralWidget);
        grid->setObjectName(QStringLiteral("grid"));
        grid->setEnabled(true);

        confGridLayout->addWidget(grid, 1, 1, 1, 1);

        PredictLabel = new QLabel(centralWidget);
        PredictLabel->setObjectName(QStringLiteral("PredictLabel"));
        PredictLabel->setAlignment(Qt::AlignCenter);

        confGridLayout->addWidget(PredictLabel, 0, 1, 1, 1);


        gridLayout->addLayout(confGridLayout, 2, 0, 1, 1);

        UpGridLayout = new QGridLayout();
        UpGridLayout->setSpacing(6);
        UpGridLayout->setObjectName(QStringLiteral("UpGridLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(80, 16777215));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        UpGridLayout->addWidget(pushButton, 0, 0, 1, 1);

        dirPathTextEdit = new QTextEdit(centralWidget);
        dirPathTextEdit->setObjectName(QStringLiteral("dirPathTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dirPathTextEdit->sizePolicy().hasHeightForWidth());
        dirPathTextEdit->setSizePolicy(sizePolicy);
        dirPathTextEdit->setMaximumSize(QSize(16777215, 30));

        UpGridLayout->addWidget(dirPathTextEdit, 0, 1, 1, 1);


        gridLayout->addLayout(UpGridLayout, 0, 0, 1, 2);

        BottomLayout = new QGridLayout();
        BottomLayout->setSpacing(6);
        BottomLayout->setObjectName(QStringLiteral("BottomLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        BottomLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        BottomLayout->addWidget(label, 0, 1, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(250, 250));
        scrollArea->setMaximumSize(QSize(400, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 262, 248));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        BottomLayout->addWidget(scrollArea, 1, 2, 1, 1);

        previewImage = new QGraphicsView(centralWidget);
        previewImage->setObjectName(QStringLiteral("previewImage"));
        sizePolicy1.setHeightForWidth(previewImage->sizePolicy().hasHeightForWidth());
        previewImage->setSizePolicy(sizePolicy1);
        previewImage->setMinimumSize(QSize(250, 250));
        previewImage->setMaximumSize(QSize(250, 250));

        BottomLayout->addWidget(previewImage, 1, 0, 1, 1);

        imageNameList = new QListWidget(centralWidget);
        imageNameList->setObjectName(QStringLiteral("imageNameList"));
        sizePolicy1.setHeightForWidth(imageNameList->sizePolicy().hasHeightForWidth());
        imageNameList->setSizePolicy(sizePolicy1);
        imageNameList->setMinimumSize(QSize(0, 250));

        BottomLayout->addWidget(imageNameList, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        BottomLayout->addWidget(label_3, 0, 2, 1, 1);


        gridLayout->addLayout(BottomLayout, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ViewResults_v_0.2", Q_NULLPTR));
        Truthlabel->setText(QApplication::translate("MainWindow", "Truth", Q_NULLPTR));
        PredictLabel->setText(QApplication::translate("MainWindow", "Predict", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        dirPathTextEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">folder path....</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Image Preview", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Misclassified Images", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Coefficients", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
