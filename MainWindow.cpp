#include "MainWindow.h"
#include "norminator.h"

#include <qDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), tabsWidget(this), projectExplorer(this)
{
    setCentralWidget(&tabsWidget);
    setMinimumSize(800, 600);

    tabsWidget.addTab(new QWidget, "test");
    addDockWidget(Qt::LeftDockWidgetArea, &projectExplorer);

    show();

    /*
    ** This part is for the coordinate sensitive features that
    ** needs the window to show up before being done.
    */
    projectExplorer.moveButton();
    connect(&projectExplorer, SIGNAL(resized(QRect)), &projectExplorer, SLOT(moveButton()));
    connect(this, SIGNAL(resized(QRect)), &projectExplorer, SLOT(moveButton()));
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    event->accept();
    emit this->resized(geometry());
}

MainWindow::~MainWindow()
{

}
