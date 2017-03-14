#include "node.h"
#include <stdlib.h>
#include <stdio.h>

struct node_t {
	int data;
	Node next;
};

Node nodeCreate(int x) {
	Node create = malloc(sizeof(struct node_t));
	if(create == NULL)
		return NULL;
	create->data = x;
	create->next = NULL;
	return create;
}

void nodeDestroy(Node n) {
	if(!n)
		return;
	free(n);
}

int nodeValue(Node n) {
	if(!n)
		return 0;
	return n->data;
}

Node nodeGetNext(Node n) {
	if(!n)
		return NULL;
	return n->next;
}

void nodeSetNext(Node org, Node next) {
	if(!org)
		return;
	org->next = next;
}
