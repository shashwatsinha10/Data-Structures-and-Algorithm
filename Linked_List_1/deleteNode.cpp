#include<iostream>

class Node{
public:
  int data;
  Node *next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

using namespace std;

Node* deleteNode(Node *head, int pos){
  if (head == NULL){
    return head;
  }
  if (pos < 0){
    return head;
  }
  if (pos == 0){
    return head->next;
  }
  Node *currentNode = head;
  int currentPos = 0;
  while(currentNode != NULL && currentPos < pos - 1){
    currentPos++;
    currentNode = currentNode->next;
  }
  if (currentNode == NULL || currentNode->next == NULL){
    return head;
  }
  currentNode->next = currentNode->next->next;
  delete (currentNode->next)
  return head;
}


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}
