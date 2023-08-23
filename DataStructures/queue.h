#include "linkedlist.h"

#ifndef _queue_h
#define _queue_h

typedef LinkedList Queue;

void initializeQueue(Queue* queue);

void enqueue(Queue* queue, void* node);

void* dequeue(Queue* queue);


#endif
