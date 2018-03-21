/********************************************************************************
** Form generated from reading UI file 'displaywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYWIDGET_H
#define UI_DISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayWidget
{
public:
    QLineEdit *lineEdit;
    QLabel *label_display;
    QCheckBox *check_links;
    QCheckBox *check_scaled;
    QCheckBox *check_wordWrap;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *combo_format;
    QSpinBox *spin_indent;
    QPushButton *pushButton_showgif;

    void setupUi(QWidget *DisplayWidget)
    {
        if (DisplayWidget->objectName().isEmpty())
            DisplayWidget->setObjectName(QStringLiteral("DisplayWidget"));
        DisplayWidget->resize(729, 397);
        lineEdit = new QLineEdit(DisplayWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 141, 31));
        label_display = new QLabel(DisplayWidget);
        label_display->setObjectName(QStringLiteral("label_display"));
        label_display->setGeometry(QRect(320, 10, 370, 280));
        check_links = new QCheckBox(DisplayWidget);
        check_links->setObjectName(QStringLiteral("check_links"));
        check_links->setGeometry(QRect(50, 100, 131, 16));
        check_scaled = new QCheckBox(DisplayWidget);
        check_scaled->setObjectName(QStringLiteral("check_scaled"));
        check_scaled->setGeometry(QRect(140, 130, 131, 16));
        check_wordWrap = new QCheckBox(DisplayWidget);
        check_wordWrap->setObjectName(QStringLiteral("check_wordWrap"));
        check_wordWrap->setGeometry(QRect(50, 130, 91, 16));
        label_2 = new QLabel(DisplayWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 180, 161, 21));
        label_3 = new QLabel(DisplayWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 220, 161, 21));
        combo_format = new QComboBox(DisplayWidget);
        combo_format->setObjectName(QStringLiteral("combo_format"));
        combo_format->setGeometry(QRect(30, 250, 111, 22));
        spin_indent = new QSpinBox(DisplayWidget);
        spin_indent->setObjectName(QStringLiteral("spin_indent"));
        spin_indent->setGeometry(QRect(100, 180, 111, 22));
        pushButton_showgif = new QPushButton(DisplayWidget);
        pushButton_showgif->setObjectName(QStringLiteral("pushButton_showgif"));
        pushButton_showgif->setGeometry(QRect(260, 340, 75, 23));

        retranslateUi(DisplayWidget);

        QMetaObject::connectSlotsByName(DisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *DisplayWidget)
    {
        DisplayWidget->setWindowTitle(QApplication::translate("DisplayWidget", "DisplayWidget", nullptr));
        label_display->setText(QApplication::translate("DisplayWidget", "\350\257\267\345\234\250\345\267\246\344\276\247\347\232\204\350\276\223\345\205\245\346\241\206\350\276\223\345\205\245\346\226\207\346\234\254", nullptr));
        check_links->setText(QApplication::translate("DisplayWidget", "openExternalLinks", nullptr));
        check_scaled->setText(QApplication::translate("DisplayWidget", "scaledContents", nullptr));
        check_wordWrap->setText(QApplication::translate("DisplayWidget", "wordWrap", nullptr));
        label_2->setText(QApplication::translate("DisplayWidget", "indent", nullptr));
        label_3->setText(QApplication::translate("DisplayWidget", "textFormat", nullptr));
        pushButton_showgif->setText(QApplication::translate("DisplayWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayWidget: public Ui_DisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYWIDGET_H
