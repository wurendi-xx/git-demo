/********************************************************************************
** Form generated from reading UI file 'standarddialogs.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDDIALOGS_H
#define UI_STANDARDDIALOGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandardDialogs
{
public:
    QTabWidget *tabWidget;
    QWidget *getint;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *getmtext;
    QLabel *label_8;
    QPushButton *getint_3;
    QPushButton *geiitem;
    QLabel *label_input;
    QPushButton *getdouble;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *gettext;
    QLabel *label_2;
    QWidget *getcolor;
    QPushButton *btn_getcolor;
    QCheckBox *check_alpha;
    QProgressBar *progressBar;
    QWidget *font;
    QPushButton *btn_font_clicked;
    QLabel *label_font;
    QWidget *dir;
    QLineEdit *line_path;
    QPushButton *btn_dir;
    QPushButton *btn_file;
    QPushButton *btn_files;
    QPushButton *btn_savefile;
    QWidget *critical;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *btn_critical;
    QPushButton *btn_warning;
    QPushButton *btn_info;
    QPushButton *btn_message;
    QPushButton *btn_question;
    QWidget *progress;
    QPushButton *btn_progress;
    QWidget *wizard;
    QPushButton *btn_wizard;

    void setupUi(QWidget *StandardDialogs)
    {
        if (StandardDialogs->objectName().isEmpty())
            StandardDialogs->setObjectName(QStringLiteral("StandardDialogs"));
        StandardDialogs->resize(725, 422);
        tabWidget = new QTabWidget(StandardDialogs);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 59, 591, 301));
        getint = new QWidget();
        getint->setObjectName(QStringLiteral("getint"));
        layoutWidget = new QWidget(getint);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 471, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        getmtext = new QPushButton(layoutWidget);
        getmtext->setObjectName(QStringLiteral("getmtext"));

        gridLayout->addWidget(getmtext, 4, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        getint_3 = new QPushButton(layoutWidget);
        getint_3->setObjectName(QStringLiteral("getint_3"));

        gridLayout->addWidget(getint_3, 0, 0, 1, 1);

        geiitem = new QPushButton(layoutWidget);
        geiitem->setObjectName(QStringLiteral("geiitem"));

        gridLayout->addWidget(geiitem, 2, 0, 1, 1);

        label_input = new QLabel(layoutWidget);
        label_input->setObjectName(QStringLiteral("label_input"));

        gridLayout->addWidget(label_input, 0, 1, 1, 1);

        getdouble = new QPushButton(layoutWidget);
        getdouble->setObjectName(QStringLiteral("getdouble"));

        gridLayout->addWidget(getdouble, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        gettext = new QPushButton(layoutWidget);
        gettext->setObjectName(QStringLiteral("gettext"));

        gridLayout->addWidget(gettext, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        tabWidget->addTab(getint, QString());
        getcolor = new QWidget();
        getcolor->setObjectName(QStringLiteral("getcolor"));
        btn_getcolor = new QPushButton(getcolor);
        btn_getcolor->setObjectName(QStringLiteral("btn_getcolor"));
        btn_getcolor->setGeometry(QRect(70, 60, 75, 23));
        check_alpha = new QCheckBox(getcolor);
        check_alpha->setObjectName(QStringLiteral("check_alpha"));
        check_alpha->setGeometry(QRect(70, 130, 221, 41));
        progressBar = new QProgressBar(getcolor);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(270, 140, 118, 23));
        progressBar->setValue(24);
        tabWidget->addTab(getcolor, QString());
        font = new QWidget();
        font->setObjectName(QStringLiteral("font"));
        btn_font_clicked = new QPushButton(font);
        btn_font_clicked->setObjectName(QStringLiteral("btn_font_clicked"));
        btn_font_clicked->setGeometry(QRect(110, 60, 75, 23));
        label_font = new QLabel(font);
        label_font->setObjectName(QStringLiteral("label_font"));
        label_font->setGeometry(QRect(230, 110, 54, 12));
        tabWidget->addTab(font, QString());
        dir = new QWidget();
        dir->setObjectName(QStringLiteral("dir"));
        line_path = new QLineEdit(dir);
        line_path->setObjectName(QStringLiteral("line_path"));
        line_path->setGeometry(QRect(10, 50, 251, 71));
        btn_dir = new QPushButton(dir);
        btn_dir->setObjectName(QStringLiteral("btn_dir"));
        btn_dir->setGeometry(QRect(290, 70, 101, 23));
        btn_file = new QPushButton(dir);
        btn_file->setObjectName(QStringLiteral("btn_file"));
        btn_file->setGeometry(QRect(290, 110, 111, 23));
        btn_files = new QPushButton(dir);
        btn_files->setObjectName(QStringLiteral("btn_files"));
        btn_files->setGeometry(QRect(290, 150, 111, 23));
        btn_savefile = new QPushButton(dir);
        btn_savefile->setObjectName(QStringLiteral("btn_savefile"));
        btn_savefile->setGeometry(QRect(290, 190, 111, 23));
        tabWidget->addTab(dir, QString());
        critical = new QWidget();
        critical->setObjectName(QStringLiteral("critical"));
        layoutWidget1 = new QWidget(critical);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 80, 261, 151));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_critical = new QPushButton(layoutWidget1);
        btn_critical->setObjectName(QStringLiteral("btn_critical"));

        gridLayout_2->addWidget(btn_critical, 0, 0, 1, 1);

        btn_warning = new QPushButton(layoutWidget1);
        btn_warning->setObjectName(QStringLiteral("btn_warning"));

        gridLayout_2->addWidget(btn_warning, 0, 1, 1, 1);

        btn_info = new QPushButton(layoutWidget1);
        btn_info->setObjectName(QStringLiteral("btn_info"));

        gridLayout_2->addWidget(btn_info, 1, 0, 1, 1);

        btn_message = new QPushButton(layoutWidget1);
        btn_message->setObjectName(QStringLiteral("btn_message"));

        gridLayout_2->addWidget(btn_message, 1, 1, 1, 1);

        btn_question = new QPushButton(layoutWidget1);
        btn_question->setObjectName(QStringLiteral("btn_question"));

        gridLayout_2->addWidget(btn_question, 2, 0, 1, 1);

        tabWidget->addTab(critical, QString());
        progress = new QWidget();
        progress->setObjectName(QStringLiteral("progress"));
        btn_progress = new QPushButton(progress);
        btn_progress->setObjectName(QStringLiteral("btn_progress"));
        btn_progress->setGeometry(QRect(70, 60, 251, 41));
        tabWidget->addTab(progress, QString());
        wizard = new QWidget();
        wizard->setObjectName(QStringLiteral("wizard"));
        btn_wizard = new QPushButton(wizard);
        btn_wizard->setObjectName(QStringLiteral("btn_wizard"));
        btn_wizard->setGeometry(QRect(140, 100, 75, 23));
        tabWidget->addTab(wizard, QString());

        retranslateUi(StandardDialogs);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(StandardDialogs);
    } // setupUi

    void retranslateUi(QWidget *StandardDialogs)
    {
        StandardDialogs->setWindowTitle(QApplication::translate("StandardDialogs", "StandardDialogs", nullptr));
        getmtext->setText(QApplication::translate("StandardDialogs", "getMultiText()", nullptr));
        label_8->setText(QApplication::translate("StandardDialogs", "TextLabel", nullptr));
        getint_3->setText(QApplication::translate("StandardDialogs", "getInt()", nullptr));
        geiitem->setText(QApplication::translate("StandardDialogs", "getItem()", nullptr));
        label_input->setText(QApplication::translate("StandardDialogs", "TextLabel", nullptr));
        getdouble->setText(QApplication::translate("StandardDialogs", "getDouble()", nullptr));
        label_3->setText(QApplication::translate("StandardDialogs", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("StandardDialogs", "TextLabel", nullptr));
        gettext->setText(QApplication::translate("StandardDialogs", "getText()", nullptr));
        label_2->setText(QApplication::translate("StandardDialogs", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(getint), QApplication::translate("StandardDialogs", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        btn_getcolor->setText(QApplication::translate("StandardDialogs", "getColor()", nullptr));
        check_alpha->setText(QApplication::translate("StandardDialogs", "\346\230\257\345\220\246\346\230\276\347\244\272\351\200\217\346\230\216\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(getcolor), QApplication::translate("StandardDialogs", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", nullptr));
        btn_font_clicked->setText(QApplication::translate("StandardDialogs", "getFont()", nullptr));
        label_font->setText(QApplication::translate("StandardDialogs", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(font), QApplication::translate("StandardDialogs", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", nullptr));
        btn_dir->setText(QApplication::translate("StandardDialogs", "\350\216\267\345\217\226\346\226\207\344\273\266\345\244\271", nullptr));
        btn_file->setText(QApplication::translate("StandardDialogs", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        btn_files->setText(QApplication::translate("StandardDialogs", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        btn_savefile->setText(QApplication::translate("StandardDialogs", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(dir), QApplication::translate("StandardDialogs", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        btn_critical->setText(QApplication::translate("StandardDialogs", "critical()", nullptr));
        btn_warning->setText(QApplication::translate("StandardDialogs", "warning()", nullptr));
        btn_info->setText(QApplication::translate("StandardDialogs", "information()", nullptr));
        btn_message->setText(QApplication::translate("StandardDialogs", "showMessage()", nullptr));
        btn_question->setText(QApplication::translate("StandardDialogs", "question()", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(critical), QApplication::translate("StandardDialogs", "\346\217\220\347\244\272\345\257\271\350\257\235\346\241\206", nullptr));
        btn_progress->setText(QApplication::translate("StandardDialogs", "\350\277\233\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(progress), QApplication::translate("StandardDialogs", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        btn_wizard->setText(QApplication::translate("StandardDialogs", "\345\274\271\345\207\272\345\220\221\345\257\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(wizard), QApplication::translate("StandardDialogs", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StandardDialogs: public Ui_StandardDialogs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDDIALOGS_H
