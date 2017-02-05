typedef struct _node Node;

struct _node {
	int data;
	Node *leftChild;
	Node *rightChild;
};

Node *root;

void insertNode(Node *temp, int data)
{	
	if(temp->leftChild == NULL)
	{
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->data = data;
		temp->leftChild = newNode;
	}
	else if(temp->rightChild == NULL)
	{
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->data = data;
		temp->rightChild = newNode;
	}
	else 
	{
		insertNode(temp->leftChild, data);
	}
}

void insert(int data) {
	if(root == NULL) {
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->data = data;
		root = newNode;
	}
	else {
		insertNode(root, data);
	}
}

void preOrder() { // ���� ��ȸ 
	
}

void inOrder(Node *temp) // ���� ��ȸ 
{ 
	if(temp->leftChild != NULL)
	{
		inOrder(temp->leftChild);
	}
	printf("%d ", temp->data);
	if(temp->rightChild != NULL)
	{
		inOrder(temp->rightChild);
	}
}

void inOrderPrint(){
	inOrder(root);
}

void postOrder() { // ���� ��ȸ 
	
}

//void remove() {
//	
//}
