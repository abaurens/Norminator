#include <QApplication>
#include <QIcon>

#include "MainWindow.h"
#include "norminator.h"

int main(int ac, char **av)
{
    QApplication app(ac, av);
    MainWindow window;

    app.setApplicationName("Norminator");
    window.show();
    return (app.exec());
}
