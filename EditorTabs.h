#ifndef EDITORTABS_H
#define EDITORTABS_H

#include <QWidget>
#include <QTabWidget>

class EditorTabs : public QTabWidget
{
    Q_OBJECT
public:
    explicit EditorTabs(QWidget *parent = nullptr);

    virtual int addTab(QWidget *, const QString &);

signals:

public slots:
};

#endif // EDITORTABS_H
