/********************************************************************************
** Form generated from reading UI file 'inputwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWIDGET_H
#define UI_INPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "weekspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_InputWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit;
    QLabel *label;
    QCheckBox *checkBox_clearBtn;
    QCheckBox *checkBox_readOnly;
    QComboBox *combo_inputH;
    QComboBox *combo_inputV;
    QComboBox *combo_echoMode;
    QComboBox *combo_validator;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_inputMask;
    QLabel *label_6;
    QWidget *tab_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *spinBox_cursorWidth;
    QSpinBox *spinBox_lineWrapColumnOrWidth;
    QSpinBox *spinBox_tabStopWidth;
    QCheckBox *checkBox_overwriteMode;
    QLabel *label_10;
    QLabel *label_11;
    QCheckBox *checkBox_tabChangesFocus;
    QComboBox *comboBox_lineWrapMode;
    QComboBox *comboBox_wordWrapMode;
    QTextEdit *textEdit;
    QWidget *tab_3;
    QLabel *label_12;
    QComboBox *combo_student;
    QCheckBox *check_editable;
    QCheckBox *check_duplicatesEnabled;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSpinBox *spinBox_maxCount;
    QSpinBox *spinBox_maxVisibleItems;
    QComboBox *combo_insertPolicy;
    QLabel *label_student;
    QWidget *tab_4;
    WeekSpinBox *spinBox;

    void setupUi(QWidget *InputWidget)
    {
        if (InputWidget->objectName().isEmpty())
            InputWidget->setObjectName(QStringLiteral("InputWidget"));
        InputWidget->resize(652, 383);
        tabWidget = new QTabWidget(InputWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 591, 331));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 351, 31));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 54, 12));
        checkBox_clearBtn = new QCheckBox(tab);
        checkBox_clearBtn->setObjectName(QStringLiteral("checkBox_clearBtn"));
        checkBox_clearBtn->setGeometry(QRect(20, 70, 71, 16));
        checkBox_readOnly = new QCheckBox(tab);
        checkBox_readOnly->setObjectName(QStringLiteral("checkBox_readOnly"));
        checkBox_readOnly->setGeometry(QRect(120, 70, 71, 16));
        combo_inputH = new QComboBox(tab);
        combo_inputH->setObjectName(QStringLiteral("combo_inputH"));
        combo_inputH->setGeometry(QRect(110, 110, 191, 22));
        combo_inputV = new QComboBox(tab);
        combo_inputV->setObjectName(QStringLiteral("combo_inputV"));
        combo_inputV->setGeometry(QRect(110, 150, 191, 22));
        combo_echoMode = new QComboBox(tab);
        combo_echoMode->setObjectName(QStringLiteral("combo_echoMode"));
        combo_echoMode->setGeometry(QRect(110, 190, 191, 22));
        combo_validator = new QComboBox(tab);
        combo_validator->setObjectName(QStringLiteral("combo_validator"));
        combo_validator->setGeometry(QRect(110, 230, 191, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 54, 12));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 54, 12));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 54, 12));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 230, 41, 16));
        lineEdit_inputMask = new QLineEdit(tab);
        lineEdit_inputMask->setObjectName(QStringLiteral("lineEdit_inputMask"));
        lineEdit_inputMask->setGeometry(QRect(110, 270, 191, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 270, 51, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 180, 131, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 220, 131, 16));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 260, 101, 16));
        spinBox_cursorWidth = new QSpinBox(tab_2);
        spinBox_cursorWidth->setObjectName(QStringLiteral("spinBox_cursorWidth"));
        spinBox_cursorWidth->setGeometry(QRect(180, 180, 71, 22));
        spinBox_lineWrapColumnOrWidth = new QSpinBox(tab_2);
        spinBox_lineWrapColumnOrWidth->setObjectName(QStringLiteral("spinBox_lineWrapColumnOrWidth"));
        spinBox_lineWrapColumnOrWidth->setGeometry(QRect(180, 220, 71, 22));
        spinBox_tabStopWidth = new QSpinBox(tab_2);
        spinBox_tabStopWidth->setObjectName(QStringLiteral("spinBox_tabStopWidth"));
        spinBox_tabStopWidth->setGeometry(QRect(180, 250, 71, 22));
        checkBox_overwriteMode = new QCheckBox(tab_2);
        checkBox_overwriteMode->setObjectName(QStringLiteral("checkBox_overwriteMode"));
        checkBox_overwriteMode->setGeometry(QRect(290, 183, 111, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(290, 230, 131, 16));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 256, 131, 16));
        checkBox_tabChangesFocus = new QCheckBox(tab_2);
        checkBox_tabChangesFocus->setObjectName(QStringLiteral("checkBox_tabChangesFocus"));
        checkBox_tabChangesFocus->setGeometry(QRect(410, 180, 111, 16));
        comboBox_lineWrapMode = new QComboBox(tab_2);
        comboBox_lineWrapMode->setObjectName(QStringLiteral("comboBox_lineWrapMode"));
        comboBox_lineWrapMode->setGeometry(QRect(410, 220, 111, 22));
        comboBox_wordWrapMode = new QComboBox(tab_2);
        comboBox_wordWrapMode->setObjectName(QStringLiteral("comboBox_wordWrapMode"));
        comboBox_wordWrapMode->setGeometry(QRect(410, 260, 111, 22));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 20, 491, 141));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 30, 54, 12));
        combo_student = new QComboBox(tab_3);
        combo_student->setObjectName(QStringLiteral("combo_student"));
        combo_student->setGeometry(QRect(120, 20, 151, 22));
        check_editable = new QCheckBox(tab_3);
        check_editable->setObjectName(QStringLiteral("check_editable"));
        check_editable->setGeometry(QRect(40, 70, 101, 16));
        check_duplicatesEnabled = new QCheckBox(tab_3);
        check_duplicatesEnabled->setObjectName(QStringLiteral("check_duplicatesEnabled"));
        check_duplicatesEnabled->setGeometry(QRect(170, 70, 111, 16));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 120, 111, 16));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 170, 141, 16));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 220, 54, 12));
        spinBox_maxCount = new QSpinBox(tab_3);
        spinBox_maxCount->setObjectName(QStringLiteral("spinBox_maxCount"));
        spinBox_maxCount->setGeometry(QRect(210, 120, 101, 22));
        spinBox_maxVisibleItems = new QSpinBox(tab_3);
        spinBox_maxVisibleItems->setObjectName(QStringLiteral("spinBox_maxVisibleItems"));
        spinBox_maxVisibleItems->setGeometry(QRect(210, 170, 101, 22));
        combo_insertPolicy = new QComboBox(tab_3);
        combo_insertPolicy->setObjectName(QStringLiteral("combo_insertPolicy"));
        combo_insertPolicy->setGeometry(QRect(190, 220, 111, 22));
        label_student = new QLabel(tab_3);
        label_student->setObjectName(QStringLiteral("label_student"));
        label_student->setGeometry(QRect(330, 100, 171, 101));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        spinBox = new WeekSpinBox(tab_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 20, 321, 22));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(InputWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InputWidget);
    } // setupUi

    void retranslateUi(QWidget *InputWidget)
    {
        InputWidget->setWindowTitle(QApplication::translate("InputWidget", "InputWidget", nullptr));
        label->setText(QApplication::translate("InputWidget", "\346\230\276\347\244\272", nullptr));
        checkBox_clearBtn->setText(QApplication::translate("InputWidget", "\346\270\205\347\251\272", nullptr));
        checkBox_readOnly->setText(QApplication::translate("InputWidget", "\345\217\252\350\257\273", nullptr));
        label_2->setText(QApplication::translate("InputWidget", "\346\260\264\345\271\263\346\226\271\345\220\221", nullptr));
        label_3->setText(QApplication::translate("InputWidget", "\345\236\202\347\233\264\346\226\271\345\220\221", nullptr));
        label_4->setText(QApplication::translate("InputWidget", "\350\276\223\345\205\245\346\250\241\345\274\217", nullptr));
        label_5->setText(QApplication::translate("InputWidget", "\351\252\214\350\257\201\347\240\201", nullptr));
        label_6->setText(QApplication::translate("InputWidget", "\350\256\276\347\275\256\346\216\251\347\240\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("InputWidget", "QLineEidt", nullptr));
        label_7->setText(QApplication::translate("InputWidget", "cursorWidth", nullptr));
        label_8->setText(QApplication::translate("InputWidget", "lineWrapColumnOrWidth", nullptr));
        label_9->setText(QApplication::translate("InputWidget", "tabStopWidth", nullptr));
        checkBox_overwriteMode->setText(QApplication::translate("InputWidget", "overwriteMode", nullptr));
        label_10->setText(QApplication::translate("InputWidget", "lineWrapMode", nullptr));
        label_11->setText(QApplication::translate("InputWidget", "wordWrapMode", nullptr));
        checkBox_tabChangesFocus->setText(QApplication::translate("InputWidget", "tabChangesFocus", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("InputWidget", "QTextEdit", nullptr));
        label_12->setText(QApplication::translate("InputWidget", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        check_editable->setText(QApplication::translate("InputWidget", "\346\230\257\345\220\246\345\217\257\344\273\245\347\274\226\350\276\221", nullptr));
        check_duplicatesEnabled->setText(QApplication::translate("InputWidget", "\346\230\257\345\220\246\345\217\257\344\273\245\351\207\215\345\220\215", nullptr));
        label_13->setText(QApplication::translate("InputWidget", "\346\234\200\345\244\247\346\230\276\347\244\272\346\225\260\347\233\256", nullptr));
        label_14->setText(QApplication::translate("InputWidget", "\346\234\200\345\244\247\345\217\257\345\275\225\345\205\245\347\232\204\345\255\246\347\224\237\344\270\252\346\225\260", nullptr));
        label_15->setText(QApplication::translate("InputWidget", "\346\217\222\345\205\245\347\255\226\347\225\245", nullptr));
        label_student->setText(QApplication::translate("InputWidget", "\345\275\223\345\211\215\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("InputWidget", "QComboBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("InputWidget", "QSpinBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputWidget: public Ui_InputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWIDGET_H
