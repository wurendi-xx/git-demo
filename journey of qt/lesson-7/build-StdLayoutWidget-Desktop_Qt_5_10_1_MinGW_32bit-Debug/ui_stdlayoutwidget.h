/********************************************************************************
** Form generated from reading UI file 'stdlayoutwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STDLAYOUTWIDGET_H
#define UI_STDLAYOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StdLayoutWidget
{
public:

    void setupUi(QWidget *StdLayoutWidget)
    {
        if (StdLayoutWidget->objectName().isEmpty())
            StdLayoutWidget->setObjectName(QStringLiteral("StdLayoutWidget"));
        StdLayoutWidget->resize(400, 300);

        retranslateUi(StdLayoutWidget);

        QMetaObject::connectSlotsByName(StdLayoutWidget);
    } // setupUi

    void retranslateUi(QWidget *StdLayoutWidget)
    {
        StdLayoutWidget->setWindowTitle(QApplication::translate("StdLayoutWidget", "StdLayoutWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StdLayoutWidget: public Ui_StdLayoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STDLAYOUTWIDGET_H
