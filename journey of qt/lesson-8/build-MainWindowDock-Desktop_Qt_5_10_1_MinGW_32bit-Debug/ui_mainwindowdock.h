/********************************************************************************
** Form generated from reading UI file 'mainwindowdock.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWDOCK_H
#define UI_MAINWINDOWDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDock
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget_areas;
    QWidget *tab_2;
    QListWidget *listWidget_features;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;

    void setupUi(QMainWindow *MainWindowDock)
    {
        if (MainWindowDock->objectName().isEmpty())
            MainWindowDock->setObjectName(QStringLiteral("MainWindowDock"));
        MainWindowDock->resize(400, 300);
        centralWidget = new QWidget(MainWindowDock);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(16, -1, 211, 161));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget_areas = new QListWidget(tab);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem2->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem3->setCheckState(Qt::Unchecked);
        listWidget_areas->setObjectName(QStringLiteral("listWidget_areas"));
        listWidget_areas->setGeometry(QRect(10, 10, 191, 121));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listWidget_features = new QListWidget(tab_2);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem4->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        listWidget_features->setObjectName(QStringLiteral("listWidget_features"));
        listWidget_features->setGeometry(QRect(20, 10, 181, 121));
        tabWidget->addTab(tab_2, QString());
        MainWindowDock->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowDock);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindowDock->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowDock);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowDock->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowDock);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowDock->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindowDock);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindowDock->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindowDock);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindowDock->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);
        dockWidget_3 = new QDockWidget(MainWindowDock);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindowDock->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_3);
        dockWidget_4 = new QDockWidget(MainWindowDock);
        dockWidget_4->setObjectName(QStringLiteral("dockWidget_4"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        dockWidget_4->setWidget(dockWidgetContents_4);
        MainWindowDock->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_4);

        retranslateUi(MainWindowDock);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindowDock);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDock)
    {
        MainWindowDock->setWindowTitle(QApplication::translate("MainWindowDock", "MainWindowDock", nullptr));

        const bool __sortingEnabled = listWidget_areas->isSortingEnabled();
        listWidget_areas->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_areas->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindowDock", "LeftDockWidgetArea", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_areas->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindowDock", "RightDockWidgetArea", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_areas->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindowDock", "TopDoclWidgetArea", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_areas->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindowDock", "BottonDockWidgetArea", nullptr));
        listWidget_areas->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDock", "allowedAreas", nullptr));

        const bool __sortingEnabled1 = listWidget_features->isSortingEnabled();
        listWidget_features->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_features->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindowDock", "DockWidgetClosable", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_features->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindowDock", "DockWidgetMovable", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_features->item(2);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindowDock", "DockWidgetFloatable", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_features->item(3);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindowDock", "DockWidgetVerticalTitleBar", nullptr));
        listWidget_features->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDock", "features", nullptr));
        dockWidget->setWindowTitle(QApplication::translate("MainWindowDock", "\344\270\212\344\276\247", nullptr));
        dockWidget_2->setWindowTitle(QApplication::translate("MainWindowDock", "\345\267\246\344\276\247", nullptr));
        dockWidget_3->setWindowTitle(QApplication::translate("MainWindowDock", "\345\217\263\344\276\247", nullptr));
        dockWidget_4->setWindowTitle(QApplication::translate("MainWindowDock", "\344\270\213\344\276\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDock: public Ui_MainWindowDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWDOCK_H
