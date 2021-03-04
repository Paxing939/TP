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

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;
    bool MoveMode = false;

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);
    void on_checkBox_stateChanged(int arg1);
};
#endif // MAINWINDOW_H
