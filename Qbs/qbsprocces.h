#ifndef QBSPROCCES_H
#define QBSPROCCES_H

#include <QProcess>
#include <QWidget>
#include <QObject>
#include <QByteArray>
#include <QDebug>
#include <QStringList>

class QbsProcces : public QWidget
{
    Q_OBJECT
public:
    QbsProcces(QWidget *parent = 0);
private:
    QProcess *mProcess;
public  slots:
    void slotShow();
    void slotCommand(QString &str);
signals:
    void outputRead(QString &);
};

#endif // QBSPROCCES_H
