#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


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
    void on_myButton_clicked();




    void on_actionChange_the_Color_2_triggered();

private:
    Ui::MainWindow *ui;
    QString filename;

        QImage image;

};
#endif // MAINWINDOW_H
