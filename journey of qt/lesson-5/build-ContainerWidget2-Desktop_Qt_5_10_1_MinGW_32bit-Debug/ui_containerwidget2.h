/********************************************************************************
** Form generated from reading UI file 'containerwidget2.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINERWIDGET2_H
#define UI_CONTAINERWIDGET2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContainerWidget2
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QCheckBox *check_flat;
    QSpinBox *spinBox;
    QToolButton *toolButton;
    QWidget *page_2;
    QGroupBox *groupBox;
    QComboBox *combo_elide;
    QComboBox *combo_tabposition;
    QComboBox *combo_tabshape;
    QCheckBox *check_document;
    QCheckBox *check_moveable;
    QCheckBox *check_closable;
    QCheckBox *check_autohide;
    QCheckBox *check_scrollBtns;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QPushButton *btn_addItem;
    QPushButton *btn_delItem;

    void setupUi(QWidget *ContainerWidget2)
    {
        if (ContainerWidget2->objectName().isEmpty())
            ContainerWidget2->setObjectName(QStringLiteral("ContainerWidget2"));
        tabWidget = new QTabWidget(ContainerWidget2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 181, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 151, 241));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        toolBox = new QToolBox(ContainerWidget2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(210, 60, 101, 251));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 101, 199));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 71, 21));
        radioButton = new QRadioButton(page);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 70, 89, 16));
        radioButton_2 = new QRadioButton(page);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 100, 89, 16));
        check_flat = new QCheckBox(page);
        check_flat->setObjectName(QStringLiteral("check_flat"));
        check_flat->setGeometry(QRect(10, 120, 71, 16));
        spinBox = new QSpinBox(page);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 160, 61, 22));
        toolButton = new QToolButton(page);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 30, 71, 21));
        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 101, 199));
        toolBox->addItem(page_2, QStringLiteral("Page 2"));
        groupBox = new QGroupBox(ContainerWidget2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(330, 30, 241, 211));
        combo_elide = new QComboBox(groupBox);
        combo_elide->setObjectName(QStringLiteral("combo_elide"));
        combo_elide->setGeometry(QRect(100, 10, 69, 22));
        combo_tabposition = new QComboBox(groupBox);
        combo_tabposition->setObjectName(QStringLiteral("combo_tabposition"));
        combo_tabposition->setGeometry(QRect(100, 40, 69, 22));
        combo_tabshape = new QComboBox(groupBox);
        combo_tabshape->setObjectName(QStringLiteral("combo_tabshape"));
        combo_tabshape->setGeometry(QRect(100, 70, 69, 22));
        check_document = new QCheckBox(groupBox);
        check_document->setObjectName(QStringLiteral("check_document"));
        check_document->setGeometry(QRect(10, 110, 91, 16));
        check_moveable = new QCheckBox(groupBox);
        check_moveable->setObjectName(QStringLiteral("check_moveable"));
        check_moveable->setGeometry(QRect(130, 110, 71, 16));
        check_closable = new QCheckBox(groupBox);
        check_closable->setObjectName(QStringLiteral("check_closable"));
        check_closable->setGeometry(QRect(130, 150, 101, 16));
        check_autohide = new QCheckBox(groupBox);
        check_autohide->setObjectName(QStringLiteral("check_autohide"));
        check_autohide->setGeometry(QRect(10, 150, 121, 16));
        check_scrollBtns = new QCheckBox(groupBox);
        check_scrollBtns->setObjectName(QStringLiteral("check_scrollBtns"));
        check_scrollBtns->setGeometry(QRect(10, 190, 151, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 71, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 54, 12));
        groupBox_2 = new QGroupBox(ContainerWidget2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(330, 250, 221, 111));
        btn_addItem = new QPushButton(groupBox_2);
        btn_addItem->setObjectName(QStringLiteral("btn_addItem"));
        btn_addItem->setGeometry(QRect(60, 30, 131, 23));
        btn_delItem = new QPushButton(groupBox_2);
        btn_delItem->setObjectName(QStringLiteral("btn_delItem"));
        btn_delItem->setGeometry(QRect(60, 70, 131, 23));

        retranslateUi(ContainerWidget2);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ContainerWidget2);
    } // setupUi

    void retranslateUi(QWidget *ContainerWidget2)
    {
        ContainerWidget2->setWindowTitle(QApplication::translate("ContainerWidget2", "ContainerWidget2", nullptr));
        textEdit->setHtml(QApplication::translate("ContainerWidget2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:10px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:29px; background-color:#ffffff;\"><a name=\"best-content-1070300192\"></a><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\347\276\275</span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\343\201\260\343\201\237\343\201\204\343\201\237\343\202\211\346\210\273\343\202\211\343\201\252\343\201\204"
                        "\343\201\250\350\250\200\343\201\243\343\201\246 </span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333;\"><br />\347\233\256\346\214\207\343\201\227\343\201\237\343\201\256\343\201\257\350\213\215\343\201\204\350\213\215\343\201\204\343\201\202\343\201\256\347\251\272 <br />\346\202\262\343\201\227\343\201\277\343\201\257\343\201\276\343\201\240\350\246\232\343\201\210\343\202\211\343\202\214\343\201\232 <br />\345\210\207\343\201\252\343\201\225\343\201\257\344\273\212\343\201\244\343\201\213\343\201\277\345\247\213\343\202\201\343\201\237 <br />\343\201\202\343\201\252\343\201\237\343\201\270\343\201\250\346\212\261\343\201\217\343\201\223\343\201\256\346\204\237\346\203\205\343\202\202 <br />\344\273\212\350\250\200\345\217\266\343\201\253\344\273\243\343\202\217\343\201\243\343\201\246\343\201\217 <br />\346\234\252\347\237\245\343\201\252\343\202\213\344\270\226\347\225\214\343\201\256\346\242\246\343\201"
                        "\213\343\202\211\347\233\256\350\246\232\343\202\201\343\201\246 <br />\343\201\223\343\201\256\347\276\275\343\202\222\345\272\203\343\201\222\351\243\236\343\201\263\347\253\213\343\201\244 <br />\347\276\275\343\201\260\343\201\237\343\201\204\343\201\237\343\202\211\346\210\273\343\202\211\343\201\252\343\201\204\343\201\250\350\250\200\343\201\243\343\201\246 <br />\347\233\256\346\214\207\343\201\227\343\201\237\343\201\256\343\201\257\347\231\275\343\201\204\347\231\275\343\201\204\343\201\202\343\201\256\344\272\221 </span><img src=\"https://gss0.bdstatic.com/70cFsjip0QIZ8tyhnq/img/iknow/qb/select-search.png\" /><a name=\"selectsearch-icon\"></a><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333;\"><br /></span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333;\">\347\252\201\343\201\215\346\212\234\343\201"
                        "\221\343\201\237\343\202\211\350\247\201\343\201\244\343\201\213\343\202\213\343\201\250\347\237\245\343\201\243\343\201\246 <br />\346\214\257\343\202\212\345\210\207\343\202\213\343\201\273\343\201\251 <br />\350\213\215\343\201\204\350\213\215\343\201\204\343\201\202\343\201\256\347\251\272 \350\213\215\343\201\204\350\213\215\343\201\204\343\201\202\343\201\256\347\251\272 \350\213\215\343\201\204\350\213\215\343\201\204\343\201\202\343\201\256\347\251\272 <br /><br />\347\210\261\346\203\263\345\260\275\343\201\215\343\201\237\343\202\210\343\201\206\351\237\263\343\201\247 <br />\351\224\226\343\201\263\343\202\214\343\201\237\345\217\244\343\201\204\347\252\223\343\201\257\345\243\212\343\202\214\343\201\237 <br />\350\247\201\351\245\261\343\201\215\343\201\237\343\201\213\343\201\224\343\201\257 <br />\343\201\273\343\202\211\350\210\215\343\201\246\343\201\246\343\201\204\343\201\217 \346\214\257\343\202\212\350\277\224\343\202\213\343\201\223\343\201\250\343\201\257\343\202\202\343\201\206\343\201\252"
                        "\343\201\204 <br />\351\253\230\351\270\243\343\202\213\351\274\223\345\212\250\343\201\253 \345\221\274\345\220\270\343\202\222\351\242\204\343\201\221\343\201\246 <br />\343\201\223\343\201\256\347\252\223\343\202\222\343\201\221\343\201\243\343\201\246 \351\243\236\343\201\263\347\253\213\343\201\243\343\201\246 <br /><br />\351\247\206\343\201\221\345\207\272\343\201\227\343\201\237\343\202\211 \346\211\213\343\201\253\343\201\247\343\201\215\343\202\213\343\201\250\343\201\204\343\201\243\343\201\246 <br />\343\201\204\343\201\226\343\201\252\343\201\206\343\201\256\343\201\257 \350\277\234\343\201\204\350\277\234\343\201\204\343\201\202\343\201\256\345\243\260 <br />\343\201\276\343\201\266\343\201\227\343\201\231\343\201\216\343\201\237 \343\201\202\343\201\252\343\201\237\343\201\256\346\211\213\343\202\202\346\217\241\343\201\243\343\201\246 <br />\346\261\202\343\202\201\343\202\213\343\201\273\343\201\251 \351\235\222\343\201\204\351\235\222\343\201\204\343\201\202\343\201\256\347\251\272 <br /><br "
                        "/>\350\220\275\343\201\241\343\201\246\343\201\204\343\201\217\343\201\250 \345\210\206\343\201\213\343\201\243\343\201\246\343\201\204\343\201\237 <br />\343\201\235\343\202\214\343\201\247\343\202\202 \345\205\211\343\202\222\350\277\275\343\201\204\347\266\232\343\201\221\343\201\246\343\201\204\343\201\217\343\202\210 <br /><br />\347\276\275\343\201\260\343\201\237\343\201\204\343\201\237\343\202\211 \346\210\273\343\202\211\343\201\252\343\201\204\343\201\250\343\201\204\343\201\243\343\201\246 <br />\346\216\242\343\201\227\343\201\237\343\201\256\343\201\257 \347\231\275\343\201\204\347\231\275\343\201\204\343\201\202\343\201\256\344\272\221 <br />\343\201\244\343\201\215\343\201\254\343\201\221\343\201\237\343\202\211 \350\247\201\343\201\244\343\201\213\343\202\213\343\201\250\347\237\245\343\201\243\343\201\246 <br />\346\214\257\343\202\212\345\210\207\343\202\213\343\201\273\343\201\251 \351\235\222\343\201\204\351\235\222\343\201\204\343\201\202\343\201\256\347\251\272 <br />\351\235\222\343\201\204"
                        "\351\235\222\343\201\204\343\201\202\343\201\256\347\251\272 <br />\351\235\222\343\201\204\351\235\222\343\201\204\343\201\202\343\201\256\343\201\235\343\202\211</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ContainerWidget2", "\351\235\222\351\270\237", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ContainerWidget2", "\350\277\231\351\207\214\346\230\257\347\224\250\346\235\245\347\234\213\347\234\201\347\225\245\346\250\241\345\274\217\347\232\204", nullptr));
        pushButton->setText(QApplication::translate("ContainerWidget2", "PushButton", nullptr));
        radioButton->setText(QApplication::translate("ContainerWidget2", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("ContainerWidget2", "RadioButton", nullptr));
        check_flat->setText(QApplication::translate("ContainerWidget2", "CheckBox", nullptr));
        toolButton->setText(QApplication::translate("ContainerWidget2", "Tool Button", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("ContainerWidget2", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("ContainerWidget2", "Page 2", nullptr));
        groupBox->setTitle(QApplication::translate("ContainerWidget2", "QtabWidget", nullptr));
        check_document->setText(QApplication::translate("ContainerWidget2", "documentMode", nullptr));
        check_moveable->setText(QApplication::translate("ContainerWidget2", "moveable", nullptr));
        check_closable->setText(QApplication::translate("ContainerWidget2", "tabsClosable", nullptr));
        check_autohide->setText(QApplication::translate("ContainerWidget2", "tabBarAutoHide", nullptr));
        check_scrollBtns->setText(QApplication::translate("ContainerWidget2", "userScrollButton", nullptr));
        label->setText(QApplication::translate("ContainerWidget2", "elideModel", nullptr));
        label_2->setText(QApplication::translate("ContainerWidget2", "tabPosition", nullptr));
        label_3->setText(QApplication::translate("ContainerWidget2", "tabShape", nullptr));
        groupBox_2->setTitle(QApplication::translate("ContainerWidget2", "GroupBox", nullptr));
        btn_addItem->setText(QApplication::translate("ContainerWidget2", "\346\217\222\345\205\245\344\270\200\344\270\252\346\226\260\347\232\204item", nullptr));
        btn_delItem->setText(QApplication::translate("ContainerWidget2", "\345\210\240\351\231\244\345\275\223\345\211\215item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContainerWidget2: public Ui_ContainerWidget2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINERWIDGET2_H
