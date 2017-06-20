#include <QtGui>
#include <QGridLayout>

#include "InputDialog.h"

InputDialog::InputDialog(QWidget* pwgt)
     : QDialog(pwgt, Qt::WindowTitleHint | Qt::WindowSystemMenuHint)
{
    m_ptxtFirstName = new QLineEdit;

    QLabel* plblFirstName    = new QLabel("&First Name");

    plblFirstName->setBuddy(m_ptxtFirstName);

    QPushButton* pcmdOk     = new QPushButton("&Ok");
    QPushButton* pcmdCancel = new QPushButton("&Cancel");

    connect(pcmdOk, SIGNAL(clicked()), SLOT(accept()));
    connect(pcmdCancel, SIGNAL(clicked()), SLOT(reject()));

    //Layout setup
    QGridLayout* ptopLayout = new QGridLayout;
    ptopLayout->addWidget(plblFirstName, 0, 0);
    ptopLayout->addWidget(m_ptxtFirstName, 0, 1);
    ptopLayout->addWidget(pcmdOk, 2,0);
    ptopLayout->addWidget(pcmdCancel, 2, 1);
    setLayout(ptopLayout);
}

QString InputDialog::firstName() const
{
    return m_ptxtFirstName->text();
}

