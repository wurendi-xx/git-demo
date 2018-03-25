/********************************************************************************
** Form generated from reading UI file 'spliterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITERWIDGET_H
#define UI_SPLITERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpliterWidget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *check_opaqueResize;
    QCheckBox *check_collapsible;
    QSplitter *splitter;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *SpliterWidget)
    {
        if (SpliterWidget->objectName().isEmpty())
            SpliterWidget->setObjectName(QStringLiteral("SpliterWidget"));
        SpliterWidget->resize(400, 300);
        horizontalLayoutWidget = new QWidget(SpliterWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 20, 291, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        check_opaqueResize = new QCheckBox(horizontalLayoutWidget);
        check_opaqueResize->setObjectName(QStringLiteral("check_opaqueResize"));
        check_opaqueResize->setChecked(true);

        horizontalLayout->addWidget(check_opaqueResize);

        check_collapsible = new QCheckBox(horizontalLayoutWidget);
        check_collapsible->setObjectName(QStringLiteral("check_collapsible"));
        check_collapsible->setChecked(true);

        horizontalLayout->addWidget(check_collapsible);

        splitter = new QSplitter(SpliterWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(50, 90, 331, 192));
        splitter->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        splitter->addWidget(textEdit);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);

        retranslateUi(SpliterWidget);

        QMetaObject::connectSlotsByName(SpliterWidget);
    } // setupUi

    void retranslateUi(QWidget *SpliterWidget)
    {
        SpliterWidget->setWindowTitle(QApplication::translate("SpliterWidget", "SpliterWidget", nullptr));
        check_opaqueResize->setText(QApplication::translate("SpliterWidget", "opaqueResize", nullptr));
        check_collapsible->setText(QApplication::translate("SpliterWidget", "childrenCollapsible", nullptr));
        pushButton->setText(QApplication::translate("SpliterWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpliterWidget: public Ui_SpliterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITERWIDGET_H
