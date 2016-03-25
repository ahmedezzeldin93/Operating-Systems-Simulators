#ifndef ITERATOR
#define ITERATOR

#include "processlist.h"
#include "process.h"

class Iterator
{
private:
   Process* position;
   Process* tail;

public:
   Iterator();
   int getProcessNumber();
   int getArrivalTime();
   int getBurstTime();
   void next();
   void previous();
   bool equals(Iterator b) const;

   friend class ProcessList;
};

#endif // ITERATOR

