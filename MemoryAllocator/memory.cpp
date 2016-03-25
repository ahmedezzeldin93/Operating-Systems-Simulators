#include "memory.h"
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

Memory::Memory(){
    holeCounter=-1;
    processCounter=-1;
}

void Memory::allocateFirstFit(Partition process)
{
    memoryList.sort(CompareBaseAddress());

    std::list<Partition>::iterator iter = memoryList.begin();
    for(iter; iter != memoryList.end() ; iter++){
        if(iter->size >= process.size && iter->type == false){

            int base = iter->baseAddress+ process.size;
            int diff = iter->size - process.size ;
            Partition newHole = Partition(iter->name, base, diff, false);
            memoryList.push_back(newHole);

            iter->name = process.name;
            iter->type = process.type;
            iter->size = process.size;
            break;
        }
    }
    memoryList.sort(CompareBaseAddress());
}

void Memory::allocateBestFit(Partition process)
{
    memoryList.sort(CompareSize());
    std::list<Partition>::iterator iter = memoryList.begin();
    for(iter; iter != memoryList.end() ; iter++){
        if(iter->size >= process.size && iter->type == false){

            int base = iter->baseAddress+ process.size;
            int diff = iter->size - process.size ;
            Partition newHole = Partition(iter->name, base, diff, false);
            memoryList.push_back(newHole);

            iter->name = process.name;
            iter->type = process.type;
            iter->size = process.size;
            break;
        }
    }
    memoryList.sort(CompareBaseAddress());
}

void Memory::allocateWorstFit(Partition process)
{
    memoryList.sort(CompareSize());
    std::list<Partition>::iterator iter = memoryList.end();
    for(; iter != memoryList.begin() ; --iter){
        if(iter->size >= process.size && iter->type == false){

            int base = iter->baseAddress + process.size;
            int diff = iter->size - process.size ;
            Partition newHole = Partition(iter->name, base, diff, false);
            memoryList.push_back(newHole);

            iter->name = process.name;
            iter->type = process.type;
            iter->size = process.size;
            break;
        }
    }
    memoryList.sort(CompareBaseAddress());
}
