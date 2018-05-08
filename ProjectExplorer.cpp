#include "ProjectExplorer.h"

#include <qDebug>

ProjectExplorer::ProjectExplorer(QWidget *parent) : QDockWidget(parent), hideButton(parent)
{
    this->setTitleBarWidget(new QWidget(this));
    this->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->setVisible(true);
    this->setMinimumSize(50, 10);
    setupButton();

    connect(&hideButton, SIGNAL(clicked(bool)), this, SLOT(toggleVisibility()));
}

void ProjectExplorer::setupButton()
{
    hideButton.setText("");
}

void ProjectExplorer::toggleVisibility()
{
    this->setVisible(!this->isVisible());
    this->moveButton();
}

void ProjectExplorer::resizeEvent(QResizeEvent *event)
{
    event->accept();
    emit this->resized(geometry());
}

void ProjectExplorer::moveButton()
{
    int h = height();
    int w = width();

    if (!isVisible())
        hideButton.setGeometry(0, (window()->height() / 2) - 20, 30, 40);
    else
        hideButton.setGeometry(w - 30, h / 2 - 20, 30, 40);
}

