/********************************************************************************
** Form generated from reading UI file 'modelwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELWIDGET_H
#define UI_MODELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelWidget
{
public:
    QPushButton *btnWindow;
    QPushButton *btnApp;
    QPushButton *btnCustom;
    QLineEdit *lineEdit;

    void setupUi(QWidget *ModelWidget)
    {
        if (ModelWidget->objectName().isEmpty())
            ModelWidget->setObjectName(QStringLiteral("ModelWidget"));
        ModelWidget->resize(400, 300);
        btnWindow = new QPushButton(ModelWidget);
        btnWindow->setObjectName(QStringLiteral("btnWindow"));
        btnWindow->setGeometry(QRect(110, 60, 131, 23));
        btnApp = new QPushButton(ModelWidget);
        btnApp->setObjectName(QStringLiteral("btnApp"));
        btnApp->setGeometry(QRect(110, 120, 131, 23));
        btnCustom = new QPushButton(ModelWidget);
        btnCustom->setObjectName(QStringLiteral("btnCustom"));
        btnCustom->setGeometry(QRect(110, 200, 131, 23));
        lineEdit = new QLineEdit(ModelWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 160, 113, 20));

        retranslateUi(ModelWidget);

        QMetaObject::connectSlotsByName(ModelWidget);
    } // setupUi

    void retranslateUi(QWidget *ModelWidget)
    {
        ModelWidget->setWindowTitle(QApplication::translate("ModelWidget", "ModelWidget", nullptr));
        btnWindow->setText(QApplication::translate("ModelWidget", "\345\274\271\345\207\272\347\252\227\345\217\243\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        btnApp->setText(QApplication::translate("ModelWidget", "\345\274\271\345\207\272\345\272\224\347\224\250\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        btnCustom->setText(QApplication::translate("ModelWidget", "\345\274\271\345\207\272\350\207\252\345\256\232\344\271\211\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelWidget: public Ui_ModelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELWIDGET_H
