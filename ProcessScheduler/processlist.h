#ifndef PROCESSLIST
#define PROCESSLIST

#include "process.h"
#include "iterator.h"

class ProcessList{

private:
    Process *head;
    Process *tail;
    void sortByArrivalTime();
    void sortByBurstTime();

public:
    ProcessList();
    void push_front(Process *process);
    void push_back(Process *process);

    void schedual_FCFS(ProcessList *n);
    void schedual_non_premptive_SJF(ProcessList *n);

    Process* find(int d);

    void remove(Process *process);
    void del(Process *node);

    Iterator begin();
    Iterator end();
};


#endif // PROCESSLIST

