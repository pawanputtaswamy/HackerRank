using namespace std;

#include<iostream>

class node
{
public:
	int data;
	node *link;
	node(int fill)
	{
		data = fill;
		link = NULL;
	}
};

class linkedList
{
	node *head = NULL;
public:

	void insertAtFront(int data)
	{
		if (head == NULL)
		{
			node* newNode = new node(data);
			head = newNode;
		}
		else
		{
			node* newNode = new node(data);
			newNode->link = head;
			head = newNode;
		}
	}

	void insertAtEnd(int data)
	{
		if (head == NULL)
		{
			node* newNode = new node(data);
			head = newNode;
		}
		else
		{
			node* newNode = new node(data);
			node* traverse = head;
			while (traverse->link != NULL)
			{
				traverse = traverse->link;
			}

			traverse->link = newNode;
		}

	}
	void printList()
	{
		node* n = head;
		while (n != NULL)
		{
			cout << n->data << "\n";
			n = n->link;
		}
	}

	void reverseLinkedList()
	{
		node* curr = head->link;
		node* prev = NULL;
		head->link = prev;

		while (curr != NULL)
		{
			prev = curr;
			curr = curr->link;
			prev->link = head;
			head = prev;
		}
	}

	Node* MergeLists(Node *list1, Node* list2)
	{
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
};
