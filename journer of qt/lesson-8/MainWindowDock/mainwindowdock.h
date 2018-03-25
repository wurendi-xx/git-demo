#ifndef MAINWINDOWDOCK_H
#define MAINWINDOWDOCK_H

#include <QMainWindow>

namespace Ui {
class MainWindowDock;
}

class MainWindowDock : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowDock(QWidget *parent = 0);
    ~MainWindowDock();

private:
    Ui::MainWindowDock *ui;
};

#endif // MAINWINDOWDOCK_H
