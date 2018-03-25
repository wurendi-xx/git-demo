/********************************************************************************
** Form generated from reading UI file 'mainwindowtoolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTOOLBAR_H
#define UI_MAINWINDOWTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowToolBar
{
public:
    QAction *actionAction1;
    QAction *actionAction2;
    QWidget *centralWidget;
    QCheckBox *check_floatable;
    QCheckBox *check_movable;
    QListWidget *listWidget_area;
    QListWidget *listWidget_button;
    QMenuBar *menuBar;
    QMenu *menufile;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindowToolBar)
    {
        if (MainWindowToolBar->objectName().isEmpty())
            MainWindowToolBar->setObjectName(QStringLiteral("MainWindowToolBar"));
        MainWindowToolBar->resize(495, 346);
        actionAction1 = new QAction(MainWindowToolBar);
        actionAction1->setObjectName(QStringLiteral("actionAction1"));
        actionAction2 = new QAction(MainWindowToolBar);
        actionAction2->setObjectName(QStringLiteral("actionAction2"));
        centralWidget = new QWidget(MainWindowToolBar);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        check_floatable = new QCheckBox(centralWidget);
        check_floatable->setObjectName(QStringLiteral("check_floatable"));
        check_floatable->setGeometry(QRect(20, 20, 101, 16));
        check_movable = new QCheckBox(centralWidget);
        check_movable->setObjectName(QStringLiteral("check_movable"));
        check_movable->setGeometry(QRect(140, 20, 81, 16));
        listWidget_area = new QListWidget(centralWidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem2->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem3->setCheckState(Qt::Checked);
        listWidget_area->setObjectName(QStringLiteral("listWidget_area"));
        listWidget_area->setGeometry(QRect(10, 50, 211, 211));
        listWidget_button = new QListWidget(centralWidget);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem4->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        listWidget_button->setObjectName(QStringLiteral("listWidget_button"));
        listWidget_button->setGeometry(QRect(260, 50, 211, 211));
        MainWindowToolBar->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowToolBar);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 495, 23));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
        MainWindowToolBar->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowToolBar);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowToolBar->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindowToolBar);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowToolBar->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menufile->menuAction());
        menufile->addAction(actionAction1);
        menufile->addAction(actionAction2);
        mainToolBar->addAction(actionAction1);
        mainToolBar->addAction(actionAction2);

        retranslateUi(MainWindowToolBar);

        QMetaObject::connectSlotsByName(MainWindowToolBar);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowToolBar)
    {
        MainWindowToolBar->setWindowTitle(QApplication::translate("MainWindowToolBar", "MainWindowToolBar", nullptr));
        actionAction1->setText(QApplication::translate("MainWindowToolBar", "Action1", nullptr));
        actionAction2->setText(QApplication::translate("MainWindowToolBar", "Action2", nullptr));
        check_floatable->setText(QApplication::translate("MainWindowToolBar", "floatable", nullptr));
        check_movable->setText(QApplication::translate("MainWindowToolBar", "moveable", nullptr));

        const bool __sortingEnabled = listWidget_area->isSortingEnabled();
        listWidget_area->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_area->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindowToolBar", "Qt::LeftToolBarArea", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_area->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindowToolBar", "Qt::RightToolBarArea", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_area->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindowToolBar", "Qt::TopToolBarArea", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_area->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindowToolBar", "Qt::BottomToolBarArea", nullptr));
        listWidget_area->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_button->isSortingEnabled();
        listWidget_button->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_button->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindowToolBar", "Qt::ToolButtonIconOnly", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_button->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindowToolBar", "Qt::ToolButtonTextOnly", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_button->item(2);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindowToolBar", "Qt::ToolButtonTextBesideIcon", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_button->item(3);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindowToolBar", "Qt::ToolButtonTextUnderIcon", nullptr));
        listWidget_button->setSortingEnabled(__sortingEnabled1);

        menufile->setTitle(QApplication::translate("MainWindowToolBar", "file", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindowToolBar", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowToolBar: public Ui_MainWindowToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWTOOLBAR_H
