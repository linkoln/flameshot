#include "mainwindow.h"
#include "capture/capturewidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QPushButton *btn = new QPushButton(this);
    connect(btn, &QPushButton::clicked, this, &MainWindow::slotCapture);
}

void MainWindow::slotCapture()
{
    CaptureWidget *clp = new CaptureWidget();
    clp->show();
}
