#include "allocator.h"
#include "ui_allocator.h"
#include <QtGui>
#include <QtCore>
#include <string>
#include <sstream>
#include "memory.h"
#include "diagram.h"
#include "partition.h"


namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

Allocator::Allocator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Allocator)
{
    ui->setupUi(this);
}

Allocator::~Allocator()
{
    delete ui;
}

void Allocator::on_addHoleBtn_clicked()
{
    QString holeSizeString;
    holeSizeString = ui->holeSizeTextEdit->toPlainText();
    bool ok;
    int holeSizeInt = holeSizeString.toInt(&ok, 10);

    QString holeBaseString;
    holeBaseString = ui->holeBaseAddrTextEdit->toPlainText();
    bool ok2;
    int holeBaseInt = holeBaseString.toInt(&ok2, 10);
    memory.holeCounter ++;
    std::string temp = patch::to_string(memory.holeCounter);
    std::string holeName = "H"+ temp;
    Partition newHole = Partition(holeName, holeBaseInt ,holeSizeInt, false);
    memory.memoryList.push_back(newHole);
}


void Allocator::on_addProcessBtn_clicked()
{
    QString processSizeString;
    processSizeString = ui->processSizeTextEdit->toPlainText();
    bool ok;
    int processSizeInt = processSizeString.toInt(&ok, 10);
    memory.processCounter ++;
    std::string temp = patch::to_string(memory.processCounter);
    std::string processName = "P"+ temp;
    Partition newProcess = Partition(processName, processSizeInt ,true);
    //memory.memoryList.push_back(newProcess);

    int index = ui->comboBox->currentIndex();
    if(index == 0){
        memory.allocateFirstFit(newProcess);
    }
    else if(index == 1){
        memory.allocateWorstFit(newProcess);
    }
    else if(index == 2){
        memory.allocateBestFit(newProcess);
    }
}

void Allocator::on_showBtn_clicked()
{
    ui->listWidget->clear();
    QString temp;
    std::list<Partition>::iterator iter;
    for(iter = memory.memoryList.begin() ;iter!= memory.memoryList.end() ;iter++){
        temp = 	QString::fromStdString(iter->name);
        ui->listWidget->addItem(temp);
    }

}

void Allocator::on_showDiagram_clicked()
{
    diagram mdiagram(this);
    mdiagram.setModal(true);
    mdiagram.exec();
}

void Allocator::on_pushButton_3_clicked()
{
    memory.memoryList.clear();
    ui->listWidget->clear();
    ui->holeBaseAddrTextEdit->clear();
    ui->holeSizeTextEdit->clear();
    ui->processSizeTextEdit->clear();
}
