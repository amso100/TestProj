#ifndef NODE_H
#define NODE_H

typedef struct node_t* Node;

Node nodeCreate(int x);
void nodeDestroy(Node n);
int nodeValue(Node n);
Node nodeGetNext(Node n);
void nodeSetNext(Node org, Node next);

#endif