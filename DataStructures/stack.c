#include "stack.h"

void initializeStack(Stack* stack) {
	initializeList(stack);
}

void push(Stack* stack, void* data) {
	addHead(stack, data);
}

void* pop(Stack* stack) {
	Node* node = stack->head;

	if (node == NULL) {
		return NULL;
	}
	else if (node == stack->tail) {
		stack->head = stack->tail = NULL;
		void* data = node->data;
		
		free(node);

		return data;
	}
	else {
		stack->head = stack->head->next;
		void* data = node->data;
		
		free(node);
		
		return data;
	}
}
