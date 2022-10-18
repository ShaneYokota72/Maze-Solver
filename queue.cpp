/*
queue.cpp
*/

#include "queue.h"
#include <iostream>
using namespace std;
//Constructor. maxlen must be as large as the total number
// of Locations that will ever be entered into this Queue.
Queue::Queue(int maxlen) {
    head = 0;
    tail = 0;
    // *** You complete **** CHECKPOINT 3
    // need storage!!
    contents = new Location[maxlen];
}

//Destructor. releases resources. C++ will call it automatically.
//This is complete, you don't need to change it.
Queue::~Queue() {
    // *** You complete **** CHECKPOINT 3
}

//Insert a new Location at the end/back of our list
void Queue::add_to_back(Location loc) {

    // *** You complete **** CHECKPOINT 3
    contents[tail] = loc;
    //cout << "1 added to tail. Tail is now " << tail+1 << endl;
    tail++;


}

//Return and "remove" the oldest Location not already extracted
Location Queue::remove_from_front() {

    // *** You complete **** CHECKPOINT 3
    int temp = head;
    head++;
    //cout << "1 added to head. Head is now " << head << endl;
    return contents[temp];
}

//Is this Queue empty? (did we extract everything added?)
//This is complete, you don't need to change it.
bool Queue::is_empty() {
    return head == tail;
}


// get tail value
int Queue::get_tail(){
    return tail;
}

// get head value
int Queue::get_head(){
    return head;
}

// get contents value(address)
Location* Queue::get_contents(){
    return contents;
}

