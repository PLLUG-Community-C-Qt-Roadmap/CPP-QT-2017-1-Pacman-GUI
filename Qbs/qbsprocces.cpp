#include "qbsprocces.h"

QbsProcces::QbsProcces(QWidget *parent):
    QWidget(parent),
    mProcess{new QProcess(this)}
{
    connect(mProcess, &QProcess::readyReadStandardOutput, this, &QbsProcces::slotShow, Qt::UniqueConnection);
    connect(mProcess, &QProcess::readyReadStandardError, this, &QbsProcces::slotShow, Qt::UniqueConnection);

    mProcess->setProcessChannelMode(QProcess::MergedChannels);
}

void QbsProcces::slotShow()
{
    QByteArray output = mProcess->readAll();
        emit outputRead(QString(output));
}

void QbsProcces::slotCommand(QString &str)
{
    QStringList mArg;
    mArg << "config" << "--list" << "profiles";
    qDebug() << mArg;
    mProcess->start("C:/Users/Bohdan/Desktop/qbs-windows-x86_64-1.7.2/bin/qbs.exe",mArg);
}

