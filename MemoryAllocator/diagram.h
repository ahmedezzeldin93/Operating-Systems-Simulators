#ifndef DIAGRAM_H
#define DIAGRAM_H

#include <QDialog>
#include "allocator.h"

namespace Ui {
class diagram;
}

class diagram : public QDialog
{
    Q_OBJECT

public:
    explicit diagram(Allocator* allocator ,QWidget *parent = 0);
    ~diagram();


private:
    Allocator *m_allocator;
    Ui::diagram *ui;

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // DIAGRAM_H
