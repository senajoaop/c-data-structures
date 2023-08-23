//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

#include "linkedlist.h"
#include "queue.h"
#include "stack.h"
#include "bintree.h"


typedef struct _sensor {
	char type[16];
	unsigned char id;
} Sensor;

//typedef void(*DISPLAY)(void*);
//typedef int(*COMPARE)(void*, void*);

int compareSensor(Sensor* s1, Sensor* s2) {
	return strcmp(s1->type, s2->type);
}

void displaySensor(Sensor* s) {
	printf("%s\t%d\n", s->type, s->id);
}


int main(int argc, char** argv) {
	
	Sensor* s1 = (Sensor*)malloc(sizeof(Sensor));
	if (s1 == NULL) { exit(1); }
	strcpy_s(s1->type, sizeof("Temperature"), "Temperature");
	s1->id = 1;

	Sensor* s2 = (Sensor*)malloc(sizeof(Sensor));
	if (s2 == NULL) { exit(1); }
	strcpy_s(s2->type, sizeof("Humidity"), "Humidity");
	s2->id = 2;

	Sensor* s3 = (Sensor*)malloc(sizeof(Sensor));
	if (s3 == NULL) { exit(1); }
	strcpy_s(s3->type, sizeof("Light"), "Light");
	s3->id = 3;


	/* Example Linked List */
	LinkedList linkedlist;
	initializeList(&linkedlist);

	addHead(&linkedlist, s1);
	addHead(&linkedlist, s2);
	addHead(&linkedlist, s3);

	displayLinkedList(&linkedlist, (DISPLAY)displaySensor);

	
	/* Example Queue */
	Queue queue;
	initializeQueue(&queue);

	enqueue(&queue, s1);
	enqueue(&queue, s2);
	enqueue(&queue, s3);

	void* data = dequeue(&queue);
	data = dequeue(&queue);
	data = dequeue(&queue);


	/* Example Stack */
	Stack stack;
	initializeStack(&stack);

	push(&stack, s1);
	push(&stack, s2);
	push(&stack, s3);

	Sensor* sensor;
	
	for (int i = 0; i < 4; i++) {
		sensor = (Sensor*)pop(&stack);
	}
	

	/* Example Binary Tree */
	TreeNode* tree = NULL;

	insertNode(&tree, (COMPARE)compareSensor, s1);
	insertNode(&tree, (COMPARE)compareSensor, s2);
	insertNode(&tree, (COMPARE)compareSensor, s3);

	preOrder(tree, (DISPLAY)displaySensor);
	inOrder(tree, (DISPLAY)displaySensor);
	postOrder(tree, (DISPLAY)displaySensor);

	return 0;
}