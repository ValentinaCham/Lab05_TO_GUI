#ifndef TASK_H
#define TASK_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Task;
class Edit;

}

class Task : public QDialog
{
    Q_OBJECT

public:
    explicit Task(QWidget *parent = nullptr);
    ~Task();

private:
    Ui::Task *ui;
    QLabel *lblPais;
    QLabel *lblCapital;
public slots:
    void editTask();
    void modificar(const QString& nuevoPais, const QString& nuevaCapital);
signals:
    void removed(Task* task);
};

#endif // TASK_H
