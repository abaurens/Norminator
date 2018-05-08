#ifndef PROJECTEXPLORER_H
#define PROJECTEXPLORER_H

#include <QWidget>
#include <QDockWidget>
#include <QPushButton>
#include <QResizeEvent>

class ProjectExplorer : public QDockWidget
{
    Q_OBJECT
public:
    explicit ProjectExplorer(QWidget *parent = nullptr);


signals:
    void resized(QRect r);

public slots:
    virtual void resizeEvent(QResizeEvent *event);
    void toggleVisibility();
    void moveButton();

private:
    void        setupButton();
    QPushButton hideButton;
};

#endif // PROJECTEXPLORER_H
