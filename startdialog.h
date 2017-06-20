#ifndef STARTDIALOG_H
#define STARTDIALOG_H
#include <QtGui>
#include <QPushButton>
#include <QMessageBox>
#include "InputDialog.h"

class StartDialog : public QPushButton {
Q_OBJECT
public:
    StartDialog(QWidget* pwgt = 0) : QPushButton("Press for Pacman", pwgt)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }

public slots:
    void slotButtonClicked()
    {
        InputDialog* pInputDialog = new InputDialog;
        if (pInputDialog->exec() == QDialog::Accepted) {
            QMessageBox::information(0,
                                     "Information",
                                     "First Name: "
                                     + pInputDialog->firstName()
                                    );
        }
        delete pInputDialog;
    }
};

#endif // STARTDIALOG_H
