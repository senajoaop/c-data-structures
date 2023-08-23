#include "linkedlist.h"

#ifndef _stack_h
#define _stack_h


typedef LinkedList Stack;

void initializeStack(Stack* stack);

void push(Stack* stack, void* data);

void* pop(Stack* stack);


#endif
