#ifndef _USER_H_
#define _USER_H_

typedef struct _node Node;
struct _node {
	char data;
	Node *next;
};

Node *rootNode;
Node *currentNode;
int _size = 0;

void add(char input) {
	Node *tempNode;
	tempNode = (Node *)malloc(sizeof(Node));
	
	tempNode->data = input;
	tempNode->next = NULL;
	
	if(_size == 0) {
		rootNode = tempNode;
		currentNode = tempNode;
	}
	else {
		currentNode->next = tempNode;
		currentNode = tempNode;
	}
	
	_size++;
}

void print() 
{
	Node *indexNode;
	indexNode = rootNode;
	
	while(indexNode != NULL) {
		printf("%c -> ", indexNode->data);
		indexNode = indexNode->next;
	}
}

void insert(int index, char data) 
{
	Node *tempNode;
	tempNode = (Node *)malloc(sizeof(Node));
	
	tempNode->data = data;
	tempNode->next = NULL;
	
	Node *indexNode = rootNode;
	int i;
	
	for(i = 0; i < index-1; i++)
		indexNode = indexNode->next;
	
	tempNode->next = indexNode->next;
	indexNode->next = tempNode;
	
	_size++;
}

int size() {
	return _size;	
}

#endif
