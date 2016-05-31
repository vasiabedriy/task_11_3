#include "task_3.h"


task_3::task_3(QWidget *parent) :
    QMainWindow(parent)
{
    m_change = new QPushButton("Change",this);
    m_change->setGeometry(QRect(QPoint(80,30),QSize(50,20)));

    m_input = new QLineEdit(this);
    m_input->setGeometry(QRect(QPoint(20,30),QSize(50,20)));
    connect(m_change, SIGNAL(clicked()), this ,SLOT(on_change_clicked()));


}

task_3::~task_3()
{
    delete m_change;
    delete m_input;
}

void task_3::on_change_clicked()
{
    m_change->setText(m_input->text());
}
