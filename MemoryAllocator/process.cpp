#include <cstdlib>
#include "partition.h"

using namespace std;

Partition::Partition(){
    name = "";
    baseAddress = 0;
    size = 0;
    type = NULL;
}

Partition::Partition(string name, int size, bool type)
{
    this->name = name;
    this->baseAddress = 0;
    this->size = size;
    this->type = type;
}

Partition::Partition(string name, int baseAddress ,int size, bool type)
{
    this->name = name;
    this->baseAddress = baseAddress;
    this->size = size;
    this->type = type;
}
