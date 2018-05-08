#include <QApplication>
#include <QIcon>
#include <iostream>

#include "MainWindow.h"
#include "norminator.h"

int main(int ac, char **av)
{
    QApplication    app(ac, av);
    MainWindow      window;
    int             endCode;

    QFile           f(":/dark/darkStylesheet");
    f.open(QIODevice::ReadOnly);
    QTextStream     st(&f);

    app.setStyleSheet(st.readAll());
    app.setApplicationName(APPLICATION_NAME);


    endCode = app.exec();
    std::cout << APPLICATION_NAME << " terminated with exit statis : " << endCode << "\n";
    return (endCode);
}
