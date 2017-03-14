#ifndef NODE_H
#define NODE_H

typedef struct node_t* Node;

//Creates a new node with integer value.
//Returns NULL if failed.
Node nodeCreate(int x);

//Destroys given node.
void nodeDestroy(Node n);

//Returns value of the current node.
int nodeValue(Node n);

//Returns next node after given one.
Node nodeGetNext(Node n);

//Sets the node after the given one.
void nodeSetNext(Node org, Node next);

#endif
