#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    ui->comboBox->addItem(QString("Compile"));
    ui->comboBox->addItem(QString("new Item"));
    setLayout(ui->verLayout);
}

Widget::~Widget()
{
    delete ui;
}
