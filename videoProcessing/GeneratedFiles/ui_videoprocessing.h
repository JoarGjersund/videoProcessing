/********************************************************************************
** Form generated from reading UI file 'videoprocessing.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPROCESSING_H
#define UI_VIDEOPROCESSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videoProcessingClass
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QFrame *videoFrame;
    QGridLayout *gridLayout;
    QSpinBox *f1;
    QSpinBox *f2;
    QSpinBox *f3;
    QSpinBox *f4;
    QSpinBox *f5;
    QSpinBox *f6;
    QSpinBox *f7;
    QSpinBox *f8;
    QSpinBox *f9;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;

    void setupUi(QWidget *videoProcessingClass)
    {
        if (videoProcessingClass->objectName().isEmpty())
            videoProcessingClass->setObjectName(QStringLiteral("videoProcessingClass"));
        videoProcessingClass->resize(783, 654);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoProcessingClass->sizePolicy().hasHeightForWidth());
        videoProcessingClass->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(videoProcessingClass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        videoFrame = new QFrame(videoProcessingClass);
        videoFrame->setObjectName(QStringLiteral("videoFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(videoFrame->sizePolicy().hasHeightForWidth());
        videoFrame->setSizePolicy(sizePolicy1);
        videoFrame->setMinimumSize(QSize(181, 151));
        videoFrame->setFrameShape(QFrame::StyledPanel);
        videoFrame->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(videoFrame, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        f1 = new QSpinBox(videoProcessingClass);
        f1->setObjectName(QStringLiteral("f1"));
        f1->setMinimum(-99);

        gridLayout->addWidget(f1, 0, 0, 1, 1);

        f2 = new QSpinBox(videoProcessingClass);
        f2->setObjectName(QStringLiteral("f2"));
        f2->setMinimum(-99);

        gridLayout->addWidget(f2, 0, 1, 1, 1);

        f3 = new QSpinBox(videoProcessingClass);
        f3->setObjectName(QStringLiteral("f3"));
        f3->setMinimum(-99);

        gridLayout->addWidget(f3, 0, 2, 1, 1);

        f4 = new QSpinBox(videoProcessingClass);
        f4->setObjectName(QStringLiteral("f4"));
        f4->setMinimum(-99);

        gridLayout->addWidget(f4, 1, 0, 1, 1);

        f5 = new QSpinBox(videoProcessingClass);
        f5->setObjectName(QStringLiteral("f5"));
        f5->setMinimum(-99);

        gridLayout->addWidget(f5, 1, 1, 1, 1);

        f6 = new QSpinBox(videoProcessingClass);
        f6->setObjectName(QStringLiteral("f6"));
        f6->setMinimum(-99);

        gridLayout->addWidget(f6, 1, 2, 1, 1);

        f7 = new QSpinBox(videoProcessingClass);
        f7->setObjectName(QStringLiteral("f7"));
        f7->setMinimum(-99);

        gridLayout->addWidget(f7, 2, 0, 1, 1);

        f8 = new QSpinBox(videoProcessingClass);
        f8->setObjectName(QStringLiteral("f8"));
        f8->setMinimum(-99);

        gridLayout->addWidget(f8, 2, 1, 1, 1);

        f9 = new QSpinBox(videoProcessingClass);
        f9->setObjectName(QStringLiteral("f9"));
        f9->setMinimum(-99);

        gridLayout->addWidget(f9, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 2);

        lineEdit = new QLineEdit(videoProcessingClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 4, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(videoProcessingClass);

        QMetaObject::connectSlotsByName(videoProcessingClass);
    } // setupUi

    void retranslateUi(QWidget *videoProcessingClass)
    {
        videoProcessingClass->setWindowTitle(QApplication::translate("videoProcessingClass", "videoProcessing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class videoProcessingClass: public Ui_videoProcessingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPROCESSING_H
