#include "mainwindow.h"
#include <QApplication>
#include "StartDialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartDialog  startDialog;

       startDialog.setMinimumSize(300, 50);
       startDialog.show();

    return a.exec();
}
