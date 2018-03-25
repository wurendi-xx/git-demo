#include "mainwindowtoolbar.h"
#include "ui_mainwindowtoolbar.h"

MainWindowToolBar::MainWindowToolBar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowToolBar)
{
    ui->setupUi(this);
}

MainWindowToolBar::~MainWindowToolBar()
{
    delete ui;
}
