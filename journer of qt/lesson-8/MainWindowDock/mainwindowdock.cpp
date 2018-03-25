#include "mainwindowdock.h"
#include "ui_mainwindowdock.h"

MainWindowDock::MainWindowDock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowDock)
{
    ui->setupUi(this);
}

MainWindowDock::~MainWindowDock()
{
    delete ui;
}
