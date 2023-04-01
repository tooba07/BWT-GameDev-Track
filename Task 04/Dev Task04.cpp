#include<stdio.h>
#include <iostream>

using namespace std;

struct Node 
{
	int data;
	Node* next;
};

struct Node* newNode(int data) 
{
	Node* node = new Node;
	node->data = data;
	node->next = NULL;
	return node;
}

void insertNewNode(Node** head, int data) 
{
	Node* node = newNode(data);
	Node* ptr;
	if (*head == NULL) 
	{
		*head = node;
	}
	else 
	{
		ptr = *head;
		while (ptr->next != NULL) 
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
}

void printLinkedList(Node* head) 
{
	while (head != NULL) 
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}

Node* createLinkedList(int arr[], int n) 
{
	Node* head = NULL;
	for (int i = 0; i < n; i++) 
	{
		insertNewNode(&head, arr[i]);
	}
	return head;
}

int main() 
{
	int n;
	int arr[10];
	cout << "Enter no. of elements: ";
	cin >> n;
	cout << "Enter elements: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	Node* head = createLinkedList(arr, n);
	cout << "--- Linked List ---" << endl;
	printLinkedList(head);
	return 0;
}
