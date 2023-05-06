#include <iostream>
using namespace std;           //Question 6
class Node
{
	public:
	int data;
	Node *next;
};
void findMax( Node *head, int k)
{
	int max;
	while (head != NULL)
	{
		if ((head->data > max) && (head->data % k == 0))
			max = head->data;
		head = head->next;
	}
	cout << "Max Element : " << max << endl;
}
void push( Node **head, int data)
{
	 Node *newNode = new Node();
	newNode->data = data;
	newNode->next = (*head);
	(*head) = newNode;
}
int main()
{
    Node *head = NULL;
	push(&head, 5);
	push(&head, 8);
	push(&head, 3);
	push(&head, 9);
	push(&head, 2);
	push(&head, 5);
	int k = 1;
	findMax(head, k);
	return 0;
}