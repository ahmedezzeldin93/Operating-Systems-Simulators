/*
 * Iterator.cpp
 *
 *  Created on: Apr 8, 2015
 *      Author: ahmed
 */
#include <cstdlib>
#include <iostream>
#include <assert.h>
#include "processlist.h"
#include "process.h"
#include "iterator.h"

Iterator::Iterator(){
    position = NULL;
    tail = NULL;
}

int Iterator::getProcessNumber(){
    assert(position != NULL);
    return position->processNumber;
}

int Iterator::getArrivalTime(){
    assert(position != NULL);
    return position->arrivalTime;
}

int Iterator::getBurstTime(){
    assert(position != NULL);
    return position->burstTime;
}

void Iterator::next(){
    assert(position != NULL);
    position = position->next;
}

void Iterator::previous(){
    if(position == NULL){
        position = tail;
    }
    else{
        position = position->previous;
        assert(position != NULL);
    }
}

bool Iterator::equals(Iterator b) const{
    return position == b.position;
}
