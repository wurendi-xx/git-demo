/********************************************************************************
** Form generated from reading UI file 'parentchildwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARENTCHILDWIDGET_H
#define UI_PARENTCHILDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParentChildWidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *ParentChildWidget)
    {
        if (ParentChildWidget->objectName().isEmpty())
            ParentChildWidget->setObjectName(QStringLiteral("ParentChildWidget"));
        ParentChildWidget->resize(400, 300);
        pushButton = new QPushButton(ParentChildWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 150, 75, 23));

        retranslateUi(ParentChildWidget);

        QMetaObject::connectSlotsByName(ParentChildWidget);
    } // setupUi

    void retranslateUi(QWidget *ParentChildWidget)
    {
        ParentChildWidget->setWindowTitle(QApplication::translate("ParentChildWidget", "ParentChildWidget", nullptr));
        pushButton->setText(QApplication::translate("ParentChildWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParentChildWidget: public Ui_ParentChildWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARENTCHILDWIDGET_H
