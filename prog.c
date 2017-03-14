#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main() {
	Node first = nodeCreate(1);
	Node next1 = nodeCreate(2);
	nodeSetNext(first, next1);
	Node next2 = nodeCreate(3);
	nodeSetNext(next1, next2);
	Node next3 = nodeCreate(5);
	nodeSetNext(next2, next3);
	printf("Finished setting up nodes.\n");

	printf("Printing nodes...\n");
	Node iter = first;
	while(iter != NULL) {
		printf("Node value is %d\n", nodeValue(iter));
		iter = nodeGetNext(iter);
	}
	printf("Finished printing nodes.");
	//Add code for destroying nodes.
	return 0;
}
