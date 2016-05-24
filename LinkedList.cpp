#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

// only for the 1st Node
void initNode(struct Node *head, int n){
	head->data = n;
	head->next = NULL;
}

// apending
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while (cur) {
		if (cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void insertFront(struct Node **head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = *head;
	*head = newNode;
}

struct Node *searchNode(struct Node *head, int n) {
	Node *cur = head;
	while (cur) {
		if (cur->data == n) return cur;
		cur = cur->next;
	}
	cout << "No Node " << n << " in list.\n";
}

bool deleteNode(struct Node **head, Node *ptrDel) {
	Node *cur = *head;
	if (ptrDel == *head) {
		*head = cur->next;
		delete ptrDel;
		return true;
	}

	while (cur) {
		if (cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}

/* reverse the list */
struct Node* reverse(struct Node** head)
{
	Node *parent = *head;
	Node *me = parent->next;
	Node *child = me->next;

	/* make parent as tail */
	parent->next = NULL;
	while (child) {
		me->next = parent;
		parent = me;
		me = child;
		child = child->next;
	}
	me->next = parent;
	*head = me;
	return *head;
}

/* Creating a copy of a linked list */
void copyLinkedList(struct Node *node, struct Node **pNew)
{
	if (node != NULL) {
		*pNew = new Node;
		(*pNew)->data = node->data;
		(*pNew)->next = NULL;
		copyLinkedList(node->next, &((*pNew)->next));
	}
}

/* Compare two linked list */
/* return value: same(1), different(0) */
int compareLinkedList(struct Node *node1, struct Node *node2)
{
	static int flag;

	/* both lists are NULL */
	if (node1 == NULL && node2 == NULL) {
		flag = 1;
	}
	else {
		if (node1 == NULL || node2 == NULL)
			flag = 0;
		else if (node1->data != node2->data)
			flag = 0;
		else
			compareLinkedList(node1->next, node2->next);
	}

	return flag;
}

void deleteLinkedList(struct Node **node)
{
	struct Node *tmpNode;
	while (*node) {
		tmpNode = *node;
		*node = tmpNode->next;
		delete tmpNode;
	}
}

void display(struct Node *head) {
	Node *list = head;
	while (list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}

Node* MergeLists(Node *list1, Node* list2)
{
	// This is a "method-only" submission. 
	// You only need to complete this method 
	if (list1 == NULL) return list2;
	if (list2 == NULL) return list1;

	Node* head;
	if (list1->data < list2->data) {
		head = list1;
	}
	else {
		head = list2;
		list2 = list1;
		list1 = head;
	}
	while (list1->next != NULL && list2 != NULL) {
		if (list1->next->data > list2->data) {
			Node* tmp = list1->next;
			list1->next = list2;
			list2 = tmp;
		}
		list1 = list1->next;
	}
	if (list1->next == NULL) list1->next = list2;
	return head;
}
/*
int main()
{
	struct Node *newHead;
	struct Node *head = new Node;
	struct Node *head2 = new Node;
	initNode(head, 10);
	addNode(head, 20);
	addNode(head, 30);
	addNode(head, 35);
	addNode(head, 40);
	initNode(head2, 7);
	addNode(head2, 15);
	addNode(head2, 32);
	addNode(head2, 34);
	addNode(head2, 50);

	insertFront(&head, 5);
	display(head);
	display(head2);
	display(MergeLists(head, head2));

	int numDel = 5;
	Node *ptrDelete = searchNode(head, numDel);
	if (deleteNode(&head, ptrDelete))
		cout << "Node " << numDel << " deleted!\n";
	display(head);

	cout << "The list is reversed\n";
	reverse(&head);
	display(head);

	cout << "The list is copied\n";
	copyLinkedList(head, &newHead);
	display(newHead);

	cout << "Comparing the two lists...\n";
	cout << "Are the two lists same?\n";
	if (compareLinkedList(head, newHead))
		cout << "Yes, they are same!\n";
	else
		cout << "No, they are different!\n";
	cout << endl;

	numDel = 35;
	ptrDelete = searchNode(newHead, numDel);
	if (deleteNode(&newHead, ptrDelete)) {
		cout << "Node " << numDel << " deleted!\n";
		cout << "The new list after the delete is\n";
		display(newHead);
	}
	cout << "Comparing the two lists again...\n";
	cout << "Are the two lists same?\n";
	if (compareLinkedList(head, newHead))
		cout << "Yes, they are same!\n";
	else
		cout << "No, they are different!\n";

	cout << endl;
	cout << "Deleting the copied list\n";
	deleteLinkedList(&newHead);
	display(newHead);
	return 0;
	}*/