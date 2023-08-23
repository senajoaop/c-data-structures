#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef _bintree_h
#define _bintree_h


typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);

typedef struct _tree {
	void* data;
	struct _tree* left;
	struct _tree* right;
} TreeNode;

void insertNode(TreeNode** root, COMPARE compare, void* data);

void inOrder(TreeNode* root, DISPLAY display);

void postOrder(TreeNode* root, DISPLAY display);

void preOrder(TreeNode* root, DISPLAY display);


#endif
