#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include "processlist.h"
#include "process.h"
#include "iterator.h"

using namespace std;


ProcessList::ProcessList(){
    head = NULL;
    tail = NULL;
}

void ProcessList::push_front(Process *process){
    process->next = head;
    head = process;
}

void ProcessList::push_back(Process *process){
    if (tail == NULL){
        head = process;
        tail = process;
    }
    else{
        process->previous =tail;
        tail-> next = process;
        tail = process;
    }
}

Iterator ProcessList::begin(){
    Iterator iter;
    iter.position = head;
    iter.tail = tail;
    return iter;
}

Iterator ProcessList::end(){
    Iterator iter;
    iter.position = NULL;
    iter.tail = tail;
    return iter;
}


void ProcessList::schedual_FCFS(ProcessList *list){
    Iterator posFirst;
    posFirst = list->begin();
    Iterator posLast;
    posLast = list->end();
    list->sortByArrivalTime();
}

void ProcessList::schedual_non_premptive_SJF(ProcessList *list){
    Iterator posFirst;
    posFirst = list->begin();
    Iterator posLast;
    posLast = list->end();

    list->sortByArrivalTime();

    for(posFirst; posFirst!=posLast ;posFirst++){
        for(posFirst; posFirst!=posLast ;posFirst++){

        }
    }

    ProcessList *newProcessList = new ProcessList();





}


/*
    int flag = 0;
    do{
        while(iter1.getArrivalTime()== iter2.getArrivalTime()){
            if(iter2.getBurstTime()<iter1.getBurstTime()){
                swap(iter1,iter2);
            }
            break;
        }
        if(flag==0){
            cout << endl <<"P" << iter1.getProcessNumber() << ": ";
            cout << iter1.getArrivalTime() << "->";
            cout << iter1.getArrivalTime()+iter1.getBurstTime();
            iter1.next();
            iter2.next();
        }
        if(flag==1){
            if(iter1.getBurstTime()< iter2.getBurstTime()){
                cout << endl <<"P" << iter1.getProcessNumber() << ": ";
                cout << iter1.getArrivalTime() << "->";
                cout << iter1.getArrivalTime()+iter1.getBurstTime();
            }else{
                cout << endl <<"P" << iter2.getProcessNumber() << ": ";
                cout << iter2.getArrivalTime() << "->";
                cout << iter2.getArrivalTime()+iter2.getBurstTime();
            }
            iter1.next();
            iter2.next();
        }
        flag=1;
        posFirst.next();
    }
    while(!posFirst.equals(list->end()));
}
*/

void ProcessList::sortByArrivalTime()
{
    Process *h = head, *i, *j;
    for(i = h; i!=NULL && i->next!=NULL; i=i->next)
    {
        Process *min;
        min = i;
        for(j = i->next; j!=NULL ; j=j->next)
        {
            if(j->arrivalTime < min->arrivalTime)
                min=j;
        }
        if(min!=i)
        {
            int temp;
            temp = min->arrivalTime;
            min->arrivalTime = i->arrivalTime;
            i->arrivalTime = temp;
        }
    }
    head = h;
}

void ProcessList::sortByBurstTime()
{
    Process *h = head, *i, *j;
    for(i = h; i!=NULL && i->next!=NULL; i=i->next)
    {
        Process *min;
        min = i;
        for(j = i->next; j!=NULL ; j=j->next)
        {
            if(j->burstTime < min->burstTime)
                min=j;
        }
        if(min!=i)
        {
            int temp;
            temp = min->burstTime;
            min->burstTime = i->burstTime;
            i->burstTime = temp;
        }
    }
    head = h;
}

/*
Process* ProcessList::find(int d){
    Process *temp = head;
    while(temp->getNext() != NULL){
        if(temp->getProcessNumber()== d)
            return temp;
        temp= temp->getNext();
    }
    return NULL;
}

int getNumberOfProcess(Process *n){
    int numberOfProcess = 0;
    while(n->getNext() != NULL){
        numberOfProcess++;
        n= n->getNext();
    }
    return numberOfProcess;
}




void ProcessList::remove(Process *process){
    if(Head == NULL) return;
    if(Head->getProcessNumber() == process->getProcessNumber()){{
        process = Head;
        Head->setNext(process->getNext());
        delete process;
    }
    else{
        Process *temp2 = chain;
        while(temp2->getNext()->getData()!=d){
            if(temp2!=NULL) return;
        temp2=temp2->getNext();
        }
    }
}

void List::del(Process *temp){
    if(temp!=NULL){
        del(temp->getNext());
        delete temp;
    }
    return;
}
*/
