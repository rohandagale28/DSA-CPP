#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void printList(Node *&head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        cout << temp->data << "->";
    }
    cout << endl;
}

void insertAtHead(Node *&head, int d)
{
    if (!head)
    {
        Node *newNode = new Node(d);
        head = newNode;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

int main()
{

    Node *n1 = new Node(1);
    Node *head = n1;

    insertAtHead(head, 2);
    printList(head);
    return 0;
}