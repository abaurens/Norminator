#include "EditorTabs.h"

EditorTabs::EditorTabs(QWidget *parent) : QTabWidget(parent)
{
    this->setTabsClosable(true);
    this->setUsesScrollButtons(false);
    this->setTabShape(QTabWidget::Rounded);
}

int EditorTabs::addTab(QWidget *widget, const QString &title)
{
    return (QTabWidget::addTab(widget, title));
}
