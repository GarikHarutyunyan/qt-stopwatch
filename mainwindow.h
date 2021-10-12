#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include <QString>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void changeTime();
    void start();
    void stop();
    void reset();
    QString intToQString(int num);

private:
    Ui::MainWindow *ui;

    int ms,s,m;
    QLabel *label;
    QTimer *timer;
    QPushButton *startButton, *resetButton;
};
#endif // MAINWINDOW_H
