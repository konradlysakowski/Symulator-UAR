/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QDoubleSpinBox *wspA1_doubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *wspA2_doubleSpinBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_16;
    QDoubleSpinBox *wspA3_doubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QDoubleSpinBox *wspB1_doubleSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QDoubleSpinBox *wspB2_doubleSpinBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QDoubleSpinBox *wspB3_doubleSpinBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_18;
    QSpinBox *opoznienie_spinBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_24;
    QDoubleSpinBox *zaklocenie_doubleSpinBox;
    QPushButton *zatwierdz_pushButton;
    QPushButton *anuluj_pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(576, 419);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_20 = new QLabel(Dialog);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_4->addWidget(label_20);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        wspA1_doubleSpinBox = new QDoubleSpinBox(Dialog);
        wspA1_doubleSpinBox->setObjectName(QString::fromUtf8("wspA1_doubleSpinBox"));
        wspA1_doubleSpinBox->setMinimum(-99.989999999999995);
        wspA1_doubleSpinBox->setSingleStep(0.100000000000000);
        wspA1_doubleSpinBox->setValue(-0.400000000000000);

        horizontalLayout_7->addWidget(wspA1_doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        wspA2_doubleSpinBox = new QDoubleSpinBox(Dialog);
        wspA2_doubleSpinBox->setObjectName(QString::fromUtf8("wspA2_doubleSpinBox"));
        wspA2_doubleSpinBox->setMinimum(-99.989999999999995);
        wspA2_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_6->addWidget(wspA2_doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_16 = new QLabel(Dialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_13->addWidget(label_16);

        wspA3_doubleSpinBox = new QDoubleSpinBox(Dialog);
        wspA3_doubleSpinBox->setObjectName(QString::fromUtf8("wspA3_doubleSpinBox"));
        wspA3_doubleSpinBox->setMinimum(-99.000000000000000);
        wspA3_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_13->addWidget(wspA3_doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        wspB1_doubleSpinBox = new QDoubleSpinBox(Dialog);
        wspB1_doubleSpinBox->setObjectName(QString::fromUtf8("wspB1_doubleSpinBox"));
        wspB1_doubleSpinBox->setMinimum(-99.989999999999995);
        wspB1_doubleSpinBox->setSingleStep(0.100000000000000);
        wspB1_doubleSpinBox->setValue(0.600000000000000);

        horizontalLayout_5->addWidget(wspB1_doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        wspB2_doubleSpinBox = new QDoubleSpinBox(Dialog);
        wspB2_doubleSpinBox->setObjectName(QString::fromUtf8("wspB2_doubleSpinBox"));
        wspB2_doubleSpinBox->setMinimum(-99.989999999999995);
        wspB2_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_4->addWidget(wspB2_doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_17 = new QLabel(Dialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_14->addWidget(label_17);

        wspB3_doubleSpinBox = new QDoubleSpinBox(Dialog);
        wspB3_doubleSpinBox->setObjectName(QString::fromUtf8("wspB3_doubleSpinBox"));
        wspB3_doubleSpinBox->setMinimum(-99.000000000000000);
        wspB3_doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_14->addWidget(wspB3_doubleSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_18 = new QLabel(Dialog);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_15->addWidget(label_18);

        opoznienie_spinBox = new QSpinBox(Dialog);
        opoznienie_spinBox->setObjectName(QString::fromUtf8("opoznienie_spinBox"));
        opoznienie_spinBox->setMinimum(1);
        opoznienie_spinBox->setValue(1);

        horizontalLayout_15->addWidget(opoznienie_spinBox);


        verticalLayout_4->addLayout(horizontalLayout_15);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_24 = new QLabel(Dialog);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout->addWidget(label_24);

        zaklocenie_doubleSpinBox = new QDoubleSpinBox(Dialog);
        zaklocenie_doubleSpinBox->setObjectName(QString::fromUtf8("zaklocenie_doubleSpinBox"));
        zaklocenie_doubleSpinBox->setSingleStep(0.010000000000000);
        zaklocenie_doubleSpinBox->setValue(0.010000000000000);

        verticalLayout->addWidget(zaklocenie_doubleSpinBox);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_4);

        zatwierdz_pushButton = new QPushButton(Dialog);
        zatwierdz_pushButton->setObjectName(QString::fromUtf8("zatwierdz_pushButton"));

        verticalLayout_3->addWidget(zatwierdz_pushButton);

        anuluj_pushButton = new QPushButton(Dialog);
        anuluj_pushButton->setObjectName(QString::fromUtf8("anuluj_pushButton"));

        verticalLayout_3->addWidget(anuluj_pushButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "Parametry modelu ARX", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynnik A1", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynnik A2", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynnik A3", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynnik B1", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynnik B2", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynnik B3", nullptr));
        label_18->setText(QCoreApplication::translate("Dialog", "Op\303\263\305\272nienie dla modelu ARX:", nullptr));
        label_24->setText(QCoreApplication::translate("Dialog", "Odchylenie standardowe zak\305\202\303\263cenia:", nullptr));
        zatwierdz_pushButton->setText(QCoreApplication::translate("Dialog", "Zatwierd\305\272", nullptr));
        anuluj_pushButton->setText(QCoreApplication::translate("Dialog", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
