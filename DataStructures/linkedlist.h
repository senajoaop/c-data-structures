#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef _linkedlist_h
#define _linkedlist_h


typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);

typedef struct _node {
	void* data;
	struct _node* next;
} Node;

typedef struct _linkedList{
	Node* head;
	Node* tail;
	Node* current;
} LinkedList;

void initializeList(LinkedList* list);

void addHead(LinkedList* list, void* data);

void addTail(LinkedList* list, void* data);

Node* getNode(LinkedList* list, COMPARE compare, void* data);

void delete(LinkedList* list, Node* node);

void displayLinkedList(LinkedList* list, DISPLAY display);

#endif