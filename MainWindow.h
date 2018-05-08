#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

#include <QMainWindow>

#include "EditorTabs.h"
#include "ProjectExplorer.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void resized(QRect r);

private slots:
    virtual void resizeEvent(QResizeEvent *event);

private:
    EditorTabs      tabsWidget;
    ProjectExplorer projectExplorer;
};

#endif // MAINWINDOW_H
