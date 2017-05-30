#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    mProcces{new QbsProcces(this)}
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    ui->comboBox->addItem(QString("\0"));
    ui->comboBox->addItem(QString("Compile"));
    ui->comboBox->addItem(QString("new Item"));
    setLayout(ui->verLayout);

    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), this, SLOT(slotProccesCommamd(QString)));

    connect(mProcces, &QbsProcces::outputRead, ui->textEdit, &QTextEdit::append);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotProccesCommamd(QString str)
{
    mProcces->slotCommand(str);
}
