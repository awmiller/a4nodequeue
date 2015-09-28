/* 
 * Andrew Miller
 * 915113828
 * amiller2@sfsu.edu
 * gcc version 4.9.3 (GCC)
 */

#ifndef QUEUE_H
#define	QUEUE_H
#include "node.h"

#define EMPTY_VALUE -1

class Queue {
public:
    Queue();
    ~Queue();
    void enqueue(int value);
    int dequeue(void);
    int front(void);
    bool isEmpty(void);
    int size(void);
    
private:

    Node *beginning,*end;
    int count;
};

#endif	/* QUEUE_H */

