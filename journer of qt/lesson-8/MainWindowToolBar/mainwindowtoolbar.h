#ifndef MAINWINDOWTOOLBAR_H
#define MAINWINDOWTOOLBAR_H

#include <QMainWindow>

namespace Ui {
class MainWindowToolBar;
}

class MainWindowToolBar : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowToolBar(QWidget *parent = 0);
    ~MainWindowToolBar();

private:
    Ui::MainWindowToolBar *ui;
};

#endif // MAINWINDOWTOOLBAR_H
