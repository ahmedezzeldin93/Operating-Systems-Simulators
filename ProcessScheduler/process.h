#ifndef PROCESS_H
#define PROCESS_H

class Process{

public:
    struct{
        int processNumber;
        int arrivalTime;
        int burstTime;
        int startingTime;
        int endingTime;
        int waitingTime;
        int restTime;
    };
    Process *next;
    Process *previous;

    Process();
    Process(int processNumber);
    Process(int processNumber, int arrivalTime, int burstTime);

    friend class list;
    friend class Iterator;

};

#endif // PROCESS_H

