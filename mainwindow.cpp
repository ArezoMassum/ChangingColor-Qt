#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QColor>
#include <QPixmap>
#include <QImage>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_myButton_clicked()
{
   //OpeningFile
    QString filename=QFileDialog::getOpenFileName(this,tr("Choose")," ",tr("images(*.png)"));
    if(QString::compare(filename,QString())!=0)
    {
     bool valid=image.load(filename);
         if(valid)
         {
           ui->label->setPixmap(QPixmap::fromImage(image));
         }
    }

}
void MainWindow::on_actionChange_the_Color_2_triggered()
{
    QColor color=QColorDialog::getColor(Qt::green,this,"Choose Color");
    int i,j;


       for(i=0;i<image.width();i++)
       {
        for(j=0;j<image.height();j++)
        {
            if(image.pixelColor(QPoint(i,j))==(QColor(242,109,108))||image.pixelColor(QPoint(i,j))==(QColor(242,107,105)))
            {
            image.setPixelColor(QPoint(i,j),color);
            }
        }

       }
       ui->label->setPixmap(QPixmap::fromImage(image));


}












