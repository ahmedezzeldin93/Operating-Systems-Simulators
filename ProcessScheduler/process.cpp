#include <cstdlib>
#include <iostream>
#include "process.h"

using namespace std;

Process::Process(){
    processNumber = 0;
    arrivalTime = 0;
    burstTime = 0;
    next = NULL;
    previous = NULL;
}

Process::Process(int x){
    processNumber = x;
    arrivalTime = NULL;
    burstTime = NULL;
    next = NULL;
    previous = NULL;
}

Process::Process(int x, int y, int z){
    processNumber = x;
    arrivalTime = y;
    burstTime = z;
    next = NULL;
    previous = NULL;
}
