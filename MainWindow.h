#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printdialog)
#include <QtPrintSupport>
#endif
#endif

#include <QMainWindow>
#include <QDockWidget>
#include <QTextEdit>
#include <QListWidget>
#include <QMenu>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow();
    ~MainWindow();

private slots:
    void newLetter();
    void save();
    void print();
    void undo();
    void about();
    void insertCustomer(const QString &customer);
    void addParagraph(const QString &paragraph);

private:
    void createActions();
    void createStatusBar();
    void createDockWindows();

    QTextEdit   *m_textEdit;
    QDockWidget *m_terminalDock;
    QDockWidget *m_fileExplorerDock;

    QListWidget *customerList;
    QListWidget *paragraphsList;

    QMenu *viewMenu;
};

#endif // MAINWINDOW_H
