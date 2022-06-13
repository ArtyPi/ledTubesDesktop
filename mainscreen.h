#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QMainWindow>

class MainScreen : public QMainWindow
{
    Q_OBJECT

public:
    MainScreen(QWidget *parent = nullptr);
    ~MainScreen();
};
#endif // MAINSCREEN_H
