/********************************************************************************
** Form generated from reading UI file 'containerframe.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINERFRAME_H
#define UI_CONTAINERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContainerFrame
{
public:
    QGroupBox *groupBox_group;
    QLabel *label_4;
    QComboBox *comboBox_aligment;
    QCheckBox *checkBox_flat;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QComboBox *combo_h;
    QComboBox *combo_v;
    QComboBox *combo_size;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_display;

    void setupUi(QWidget *ContainerFrame)
    {
        if (ContainerFrame->objectName().isEmpty())
            ContainerFrame->setObjectName(QStringLiteral("ContainerFrame"));
        ContainerFrame->resize(589, 383);
        groupBox_group = new QGroupBox(ContainerFrame);
        groupBox_group->setObjectName(QStringLiteral("groupBox_group"));
        groupBox_group->setGeometry(QRect(340, 230, 211, 131));
        label_4 = new QLabel(groupBox_group);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 40, 54, 12));
        comboBox_aligment = new QComboBox(groupBox_group);
        comboBox_aligment->setObjectName(QStringLiteral("comboBox_aligment"));
        comboBox_aligment->setGeometry(QRect(110, 40, 69, 22));
        checkBox_flat = new QCheckBox(groupBox_group);
        checkBox_flat->setObjectName(QStringLiteral("checkBox_flat"));
        checkBox_flat->setGeometry(QRect(40, 100, 71, 16));
        scrollArea = new QScrollArea(ContainerFrame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(350, 60, 211, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 209, 139));
        combo_h = new QComboBox(scrollAreaWidgetContents);
        combo_h->setObjectName(QStringLiteral("combo_h"));
        combo_h->setGeometry(QRect(130, 10, 69, 22));
        combo_v = new QComboBox(scrollAreaWidgetContents);
        combo_v->setObjectName(QStringLiteral("combo_v"));
        combo_v->setGeometry(QRect(130, 50, 69, 22));
        combo_size = new QComboBox(scrollAreaWidgetContents);
        combo_size->setObjectName(QStringLiteral("combo_size"));
        combo_size->setGeometry(QRect(130, 100, 69, 22));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 54, 12));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 101, 20));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_display = new QGroupBox(ContainerFrame);
        groupBox_display->setObjectName(QStringLiteral("groupBox_display"));
        groupBox_display->setGeometry(QRect(60, 90, 181, 231));

        retranslateUi(ContainerFrame);

        QMetaObject::connectSlotsByName(ContainerFrame);
    } // setupUi

    void retranslateUi(QWidget *ContainerFrame)
    {
        ContainerFrame->setWindowTitle(QApplication::translate("ContainerFrame", "ContainerFrame", nullptr));
        groupBox_group->setTitle(QApplication::translate("ContainerFrame", "GroupBox", nullptr));
        label_4->setText(QApplication::translate("ContainerFrame", "Alignment", nullptr));
        checkBox_flat->setText(QApplication::translate("ContainerFrame", "flat", nullptr));
        label->setText(QApplication::translate("ContainerFrame", "\346\260\264\345\271\263", nullptr));
        label_2->setText(QApplication::translate("ContainerFrame", "\345\236\202\347\233\264", nullptr));
        label_3->setText(QApplication::translate("ContainerFrame", "SizeAdjustPolicy", nullptr));
        groupBox_display->setTitle(QApplication::translate("ContainerFrame", "GroupBox\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContainerFrame: public Ui_ContainerFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINERFRAME_H
