#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

signals:
    void edition(const QString& nuevoPais, const QString& nuevaCapital);

private:
    Ui::Edit *ui;
    QLineEdit *txtPais;
    QLineEdit *txtCapital;
};

#endif // EDIT_H
