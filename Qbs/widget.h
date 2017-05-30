#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>

#include "qbsprocces.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QbsProcces *mProcces;
private slots:
    void slotProccesCommamd(QString str);
};

#endif // WIDGET_H
