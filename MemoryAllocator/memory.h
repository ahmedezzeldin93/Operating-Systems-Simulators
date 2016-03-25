#ifndef MEMORY
#define MEMORY

#include "partition.h"
#include <list>

class Memory{

public:
    std::list<Partition> memoryList;
    int holeCounter;
    int processCounter;

    struct CompareBaseAddress {
        bool operator()(Partition  lhs, Partition  rhs) {return lhs.baseAddress < rhs.baseAddress;}
    };
    struct CompareSize {
        bool operator()(Partition  lhs, Partition  rhs) {return lhs.size < rhs.size;}
    };

    Memory();
    void allocateFirstFit(Partition partition);
    void allocateBestFit(Partition partition);
    void allocateWorstFit(Partition partition);

};

#endif // MEMORY

