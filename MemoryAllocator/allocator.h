#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <QMainWindow>
#include "partition.h"
#include "memory.h"
#include <list>

namespace Ui {
class Allocator;
}

class Allocator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Allocator(QWidget *parent = 0);
    ~Allocator();
    Memory memory;

private:
    Ui::Allocator *ui;

private slots:
    void on_addHoleBtn_clicked();
    void on_addProcessBtn_clicked();
    void on_showBtn_clicked();
    void on_showDiagram_clicked();
    void on_pushButton_3_clicked();
};

#endif // ALLOCATOR_H
