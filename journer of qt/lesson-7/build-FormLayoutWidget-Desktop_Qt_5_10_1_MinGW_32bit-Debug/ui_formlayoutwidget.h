/********************************************************************************
** Form generated from reading UI file 'formlayoutwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLAYOUTWIDGET_H
#define UI_FORMLAYOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLayoutWidget
{
public:

    void setupUi(QWidget *FormLayoutWidget)
    {
        if (FormLayoutWidget->objectName().isEmpty())
            FormLayoutWidget->setObjectName(QStringLiteral("FormLayoutWidget"));
        FormLayoutWidget->resize(400, 300);

        retranslateUi(FormLayoutWidget);

        QMetaObject::connectSlotsByName(FormLayoutWidget);
    } // setupUi

    void retranslateUi(QWidget *FormLayoutWidget)
    {
        FormLayoutWidget->setWindowTitle(QApplication::translate("FormLayoutWidget", "FormLayoutWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormLayoutWidget: public Ui_FormLayoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLAYOUTWIDGET_H
