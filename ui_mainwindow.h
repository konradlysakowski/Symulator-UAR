/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *start_pushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *stop_pushButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *reset_pushButton;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_15;
    QSpinBox *interwal_spinBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *parametryARX_pushButton;
    QHBoxLayout *horizontalLayout_15;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *kp_doubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *ti_doubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *td_doubleSpinBox;
    QRadioButton *przedSuma_radioButton;
    QRadioButton *wSumie_radioButton;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_19;
    QDoubleSpinBox *uMAX_doubleSpinBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_22;
    QDoubleSpinBox *uMIN_doubleSpinBox;
    QCheckBox *AntiWindup_checkbox;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QComboBox *typSygnalu_comboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QDoubleSpinBox *amplituda_doubleSpinBox;
    QLabel *label_12;
    QSpinBox *stala_spinbox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QDoubleSpinBox *wypelnienie_doubleSpinBox;
    QLabel *label_13;
    QSpinBox *chwilaAktywacji_spinBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpinBox *okres_spinBox;
    QVBoxLayout *verticalLayout_7;
    QCustomPlot *wartosci_wykres;
    QCustomPlot *sterowanie_wykres;
    QCustomPlot *uchyb_wykres;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1575, 761);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        start_pushButton = new QPushButton(centralwidget);
        start_pushButton->setObjectName(QString::fromUtf8("start_pushButton"));

        verticalLayout_3->addWidget(start_pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        stop_pushButton = new QPushButton(centralwidget);
        stop_pushButton->setObjectName(QString::fromUtf8("stop_pushButton"));

        verticalLayout_3->addWidget(stop_pushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        reset_pushButton = new QPushButton(centralwidget);
        reset_pushButton->setObjectName(QString::fromUtf8("reset_pushButton"));

        verticalLayout_3->addWidget(reset_pushButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_3->addWidget(label_15);

        interwal_spinBox = new QSpinBox(centralwidget);
        interwal_spinBox->setObjectName(QString::fromUtf8("interwal_spinBox"));
        QFont font;
        font.setPointSize(9);
        interwal_spinBox->setFont(font);
        interwal_spinBox->setMaximum(1000);
        interwal_spinBox->setSingleStep(10);
        interwal_spinBox->setValue(100);

        verticalLayout_3->addWidget(interwal_spinBox);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));

        verticalLayout_4->addLayout(horizontalLayout_14);

        parametryARX_pushButton = new QPushButton(centralwidget);
        parametryARX_pushButton->setObjectName(QString::fromUtf8("parametryARX_pushButton"));

        verticalLayout_4->addWidget(parametryARX_pushButton);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));

        verticalLayout_4->addLayout(horizontalLayout_15);


        verticalLayout_6->addLayout(verticalLayout_4);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        kp_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        kp_doubleSpinBox->setObjectName(QString::fromUtf8("kp_doubleSpinBox"));
        kp_doubleSpinBox->setSingleStep(0.100000000000000);
        kp_doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(kp_doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        ti_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        ti_doubleSpinBox->setObjectName(QString::fromUtf8("ti_doubleSpinBox"));
        ti_doubleSpinBox->setSingleStep(0.100000000000000);
        ti_doubleSpinBox->setValue(2.500000000000000);

        horizontalLayout_2->addWidget(ti_doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        td_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        td_doubleSpinBox->setObjectName(QString::fromUtf8("td_doubleSpinBox"));
        td_doubleSpinBox->setSingleStep(0.100000000000000);
        td_doubleSpinBox->setValue(0.200000000000000);

        horizontalLayout_3->addWidget(td_doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        przedSuma_radioButton = new QRadioButton(centralwidget);
        przedSuma_radioButton->setObjectName(QString::fromUtf8("przedSuma_radioButton"));
        przedSuma_radioButton->setChecked(true);

        verticalLayout->addWidget(przedSuma_radioButton);

        wSumie_radioButton = new QRadioButton(centralwidget);
        wSumie_radioButton->setObjectName(QString::fromUtf8("wSumie_radioButton"));

        verticalLayout->addWidget(wSumie_radioButton);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout->addWidget(label_23);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_19);

        uMAX_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        uMAX_doubleSpinBox->setObjectName(QString::fromUtf8("uMAX_doubleSpinBox"));
        uMAX_doubleSpinBox->setMinimum(-100.000000000000000);
        uMAX_doubleSpinBox->setMaximum(100.000000000000000);
        uMAX_doubleSpinBox->setValue(5.000000000000000);

        horizontalLayout_17->addWidget(uMAX_doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_22);

        uMIN_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        uMIN_doubleSpinBox->setObjectName(QString::fromUtf8("uMIN_doubleSpinBox"));
        uMIN_doubleSpinBox->setMinimum(-100.000000000000000);
        uMIN_doubleSpinBox->setMaximum(100.000000000000000);
        uMIN_doubleSpinBox->setValue(-5.000000000000000);

        horizontalLayout_16->addWidget(uMIN_doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_16);

        AntiWindup_checkbox = new QCheckBox(centralwidget);
        AntiWindup_checkbox->setObjectName(QString::fromUtf8("AntiWindup_checkbox"));

        verticalLayout->addWidget(AntiWindup_checkbox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_6->addLayout(verticalLayout);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_5->addWidget(label_21);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_14);

        typSygnalu_comboBox = new QComboBox(centralwidget);
        typSygnalu_comboBox->addItem(QString());
        typSygnalu_comboBox->addItem(QString());
        typSygnalu_comboBox->addItem(QString());
        typSygnalu_comboBox->setObjectName(QString::fromUtf8("typSygnalu_comboBox"));

        horizontalLayout_8->addWidget(typSygnalu_comboBox);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        amplituda_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        amplituda_doubleSpinBox->setObjectName(QString::fromUtf8("amplituda_doubleSpinBox"));
        amplituda_doubleSpinBox->setValue(5.000000000000000);

        horizontalLayout_9->addWidget(amplituda_doubleSpinBox);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_9->addWidget(label_12);

        stala_spinbox = new QSpinBox(centralwidget);
        stala_spinbox->setObjectName(QString::fromUtf8("stala_spinbox"));
        stala_spinbox->setValue(5);

        horizontalLayout_9->addWidget(stala_spinbox);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_10);

        wypelnienie_doubleSpinBox = new QDoubleSpinBox(centralwidget);
        wypelnienie_doubleSpinBox->setObjectName(QString::fromUtf8("wypelnienie_doubleSpinBox"));
        wypelnienie_doubleSpinBox->setMaximum(1.000000000000000);
        wypelnienie_doubleSpinBox->setSingleStep(0.100000000000000);
        wypelnienie_doubleSpinBox->setValue(0.500000000000000);

        horizontalLayout_10->addWidget(wypelnienie_doubleSpinBox);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_10->addWidget(label_13);

        chwilaAktywacji_spinBox = new QSpinBox(centralwidget);
        chwilaAktywacji_spinBox->setObjectName(QString::fromUtf8("chwilaAktywacji_spinBox"));
        chwilaAktywacji_spinBox->setValue(2);

        horizontalLayout_10->addWidget(chwilaAktywacji_spinBox);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_11);

        okres_spinBox = new QSpinBox(centralwidget);
        okres_spinBox->setObjectName(QString::fromUtf8("okres_spinBox"));
        okres_spinBox->setMaximum(10000);
        okres_spinBox->setValue(100);

        horizontalLayout_11->addWidget(okres_spinBox);


        verticalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_6->addLayout(verticalLayout_5);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        wartosci_wykres = new QCustomPlot(centralwidget);
        wartosci_wykres->setObjectName(QString::fromUtf8("wartosci_wykres"));

        verticalLayout_7->addWidget(wartosci_wykres);

        sterowanie_wykres = new QCustomPlot(centralwidget);
        sterowanie_wykres->setObjectName(QString::fromUtf8("sterowanie_wykres"));

        verticalLayout_7->addWidget(sterowanie_wykres);

        uchyb_wykres = new QCustomPlot(centralwidget);
        uchyb_wykres->setObjectName(QString::fromUtf8("uchyb_wykres"));

        verticalLayout_7->addWidget(uchyb_wykres);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        typSygnalu_comboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        start_pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop_pushButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        reset_pushButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202 czasowy [ms]:", nullptr));
        parametryARX_pushButton->setText(QCoreApplication::translate("MainWindow", "Ustaw parametry modelu ARX", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Parametry regulatora PID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ti", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Td", nullptr));
        przedSuma_radioButton->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a przed sum\304\205", nullptr));
        wSumie_radioButton->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a w sumie", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Ograniczenia:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "MAX", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "MIN", nullptr));
        AntiWindup_checkbox->setText(QCoreApplication::translate("MainWindow", "Anti-Windup", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Parametry sygna\305\202u", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Sygna\305\202", nullptr));
        typSygnalu_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Skok jednostkowy", nullptr));
        typSygnalu_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Sinusoidalny", nullptr));
        typSygnalu_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Prostok\304\205tny", nullptr));

        typSygnalu_comboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Sinusoidalny", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Amplituda", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Wype\305\202nienie", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Chwila Aktywacji", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Okres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
