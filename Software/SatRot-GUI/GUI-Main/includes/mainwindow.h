#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>

#include "includes/api.h"
#include "includes/webappview.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_horizontalSlider_valueChanged(int value);


    void on_verticalSlider_valueChanged(int value);

    void on_pushButton_clicked();



    void on_webView_loadStarted();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H