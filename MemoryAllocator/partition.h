#ifndef PARTITION
#define PARTITION
#include <string>

class Partition{

public:

    std::string name;
    int baseAddress;
    int size;
    bool type;

    Partition();
    Partition(std::string name ,bool type);
    Partition(int baseAddress, int size ,bool type);
    Partition(std::string name, int size ,bool type);
    Partition(std::string name, int baseAddress ,int size ,bool type);

};

#endif // PARTITION
