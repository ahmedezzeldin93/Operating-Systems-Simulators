#include "allocator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Allocator w;
    w.show();

    return a.exec();
}
