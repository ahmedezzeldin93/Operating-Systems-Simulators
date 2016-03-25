#include "diagram.h"
#include "partition.h"
#include "memory.h"
#include <QtGui>
#include "allocator.h"
#include "ui_diagram.h"

diagram::diagram(Allocator *allocator , QWidget *parent) :
    QDialog(parent),
    m_allocator(allocator),
    ui(new Ui::diagram)
{
    ui->setupUi(this);
}

diagram::~diagram()
{
    delete ui;
}

void diagram::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QRect rect(100,100,400,100);
    QBrush brush(Qt::black, Qt::SolidPattern);
    painter.fillRect(rect, brush);
    painter.drawRect(rect);

    QRect rectWhite(85,280,20,20);
    QBrush brushWhite(Qt::white, Qt::SolidPattern);
    painter.fillRect(rectWhite, brushWhite);
    painter.drawRect(rectWhite);

    QRect rectBlue(85,305,20,20);
    QBrush brushBlue(Qt::blue, Qt::SolidPattern);
    painter.fillRect(rectBlue, brushBlue);
    painter.drawRect(rectBlue);

    QRect rectBlack(85,330,20,20);
    QBrush brushBlack(Qt::black, Qt::SolidPattern);
    painter.fillRect(rectBlack, brushBlack);
    painter.drawRect(rectBlack);

    std::list<Partition>::iterator iter = m_allocator->memory.memoryList.begin();
    for(iter; iter != m_allocator->memory.memoryList.end(); iter++){
        int b = iter->baseAddress *400 /1024;
        int h = iter->size * 400 /1024;
        if(iter->type == true){
            QRect rect2(b+100,100,h,100);
            QBrush brush2(Qt::blue, Qt::SolidPattern);
            painter.fillRect(rect2, brush2);
            painter.drawRect(rect2);
            painter.drawText(rect2,Qt::AlignCenter,QString::fromStdString(iter->name));
            painter.drawText(b+100,215,QString::number(iter->baseAddress));
        }else if (iter->type == false){
            QRect rect3(b+100,100,h,100);
            QBrush brush3(Qt::white, Qt::SolidPattern);
            painter.fillRect(rect3, brush3);
            painter.drawRect(rect3);
            painter.drawText(rect3,Qt::AlignCenter,QString::fromStdString(iter->name));
            painter.drawText(b+100,215,QString::number(iter->baseAddress));
        }
    }
}











