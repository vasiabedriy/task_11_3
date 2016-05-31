#ifndef TASK_3_H
#define TASK_3_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>

namespace Ui {
class task_3;
}

class task_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_3(QWidget *parent = 0);
    ~task_3();

private slots:
    void on_change_clicked();

private:
    QPushButton* m_change;
    QLineEdit* m_input;
};

#endif // TASK_3_H
