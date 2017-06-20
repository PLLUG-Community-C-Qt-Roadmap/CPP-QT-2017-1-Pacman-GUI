#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class QLineEdit;
class InputDialog : public QDialog {
    Q_OBJECT
private:
    QLineEdit* m_ptxtFirstName;

public:
    InputDialog(QWidget* pwgt = 0);

    QString firstName() const;
};

#endif // INPUTDIALOG_H
