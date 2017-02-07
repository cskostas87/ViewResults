/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *UpGridLayout;
    QTextEdit *dirPathTextEdit;
    QPushButton *pushButton;
    QFrame *line;
    QGridLayout *ConfusionGridLayout;
    QTableWidget *grid;
    QLabel *Truthlabel;
    QLabel *label_4;
    QGridLayout *BottomGridLayout;
    QGraphicsView *previewImage;
    QLabel *label;
    QLabel *label_2;
    QListWidget *imageNameList;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(817, 727);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        UpGridLayout = new QGridLayout();
        UpGridLayout->setSpacing(6);
        UpGridLayout->setObjectName(QString::fromUtf8("UpGridLayout"));
        dirPathTextEdit = new QTextEdit(widget);
        dirPathTextEdit->setObjectName(QString::fromUtf8("dirPathTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dirPathTextEdit->sizePolicy().hasHeightForWidth());
        dirPathTextEdit->setSizePolicy(sizePolicy1);
        dirPathTextEdit->setMaximumSize(QSize(16777215, 30));

        UpGridLayout->addWidget(dirPathTextEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(80, 16777215));

        UpGridLayout->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_3->addLayout(UpGridLayout, 0, 0, 1, 2);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 2);

        ConfusionGridLayout = new QGridLayout();
        ConfusionGridLayout->setSpacing(6);
        ConfusionGridLayout->setObjectName(QString::fromUtf8("ConfusionGridLayout"));
        ConfusionGridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        grid = new QTableWidget(widget);
        grid->setObjectName(QString::fromUtf8("grid"));
        sizePolicy.setHeightForWidth(grid->sizePolicy().hasHeightForWidth());
        grid->setSizePolicy(sizePolicy);

        ConfusionGridLayout->addWidget(grid, 2, 1, 1, 1);

        Truthlabel = new QLabel(widget);
        Truthlabel->setObjectName(QString::fromUtf8("Truthlabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Truthlabel->sizePolicy().hasHeightForWidth());
        Truthlabel->setSizePolicy(sizePolicy2);
        Truthlabel->setLayoutDirection(Qt::LeftToRight);
        Truthlabel->setFrameShape(QFrame::NoFrame);
        Truthlabel->setTextFormat(Qt::AutoText);
        Truthlabel->setAlignment(Qt::AlignCenter);
        Truthlabel->setWordWrap(false);

        ConfusionGridLayout->addWidget(Truthlabel, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        ConfusionGridLayout->addWidget(label_4, 1, 1, 1, 1);


        gridLayout_3->addLayout(ConfusionGridLayout, 2, 0, 1, 2);

        BottomGridLayout = new QGridLayout();
        BottomGridLayout->setSpacing(6);
        BottomGridLayout->setObjectName(QString::fromUtf8("BottomGridLayout"));
        BottomGridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        previewImage = new QGraphicsView(widget);
        previewImage->setObjectName(QString::fromUtf8("previewImage"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(previewImage->sizePolicy().hasHeightForWidth());
        previewImage->setSizePolicy(sizePolicy3);
        previewImage->setMinimumSize(QSize(250, 250));
        previewImage->setMaximumSize(QSize(250, 250));

        BottomGridLayout->addWidget(previewImage, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setAlignment(Qt::AlignCenter);

        BottomGridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setAlignment(Qt::AlignCenter);

        BottomGridLayout->addWidget(label_2, 0, 1, 1, 1);

        imageNameList = new QListWidget(widget);
        imageNameList->setObjectName(QString::fromUtf8("imageNameList"));
        sizePolicy3.setHeightForWidth(imageNameList->sizePolicy().hasHeightForWidth());
        imageNameList->setSizePolicy(sizePolicy3);
        imageNameList->setMinimumSize(QSize(0, 250));

        BottomGridLayout->addWidget(imageNameList, 1, 1, 1, 1);


        gridLayout_3->addLayout(BottomGridLayout, 3, 0, 1, 1);

        MainWindow->setCentralWidget(widget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ViewResults_v_0.1", 0, QApplication::UnicodeUTF8));
        dirPathTextEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">folder path....</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        Truthlabel->setText(QApplication::translate("MainWindow", "Truth", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Predict", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Image Preview", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Misclassified Images", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
