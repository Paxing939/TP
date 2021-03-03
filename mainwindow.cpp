#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>
#include "Ellipse.h"
#include <Line.h>
#include <Polygon.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

}

void MainWindow :: paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    QPainter painter(this);
    Figure* object;


    if (ui->comboBox->currentText() == "Rect") {
        QPoint* points = new QPoint[4];
        points[0] = QPoint(100,100);
        points[2] = QPoint(200,200);
        points[1] = QPoint(200,100);
        points[3] = QPoint(100,200);
        object = new Polygon(points,4);
    }
    else if (ui->comboBox->currentText() == "Ellipse"){
        object = new Ellipse(QPoint(200,200),50,50);
    }
    else if (ui->comboBox->currentText() == "Segment") {
        object = new class Line(QPoint(100,100), QPoint(200,200));
    }
    else if (ui->comboBox->currentText() == "Polygon"){
        int num_of_points = ui->spinBox->value();
        object = new Polygon(nullptr,num_of_points);
    }
    object->Draw(&painter);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    repaint();
}
