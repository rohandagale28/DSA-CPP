#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        cout << "memory is freed" << endl;
    }
};

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
        head->prev = temp;
        head = temp;
    }
}

void printList(Node *head)
{
    if (!head)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    while (temp)
    {
        cout << "{" << temp->prev << " <- ";
        cout << temp->data << " -> ";
        cout << temp->next << "}" << endl;
        temp = temp->next;
    }
}

void insertAtTail(Node *&head, int d)
{
    if (!head)
    {
        Node *newNode = new Node(d);
        head = newNode;
    }
    else
    {

        Node *newNode = new Node(d);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAtPosition(Node *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
    }
    Node *temp = head;
    Node *newNode = new Node(d);
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void deleteNode(Node *&head, int pos)
{
    // Check if the list is empty
    if (!head)
    {
        cout << "The list is empty" << endl;
        return;
    }

    Node *temp = head;

    // Case 1: Deleting the head node (position 1)
    if (pos == 1)
    {
        head = temp->next; // Move the head to the next node

        if (head) // Check if the list has more than one node
        {
            head->prev = NULL; // Set the new head's prev to NULL
        }

        delete temp; // Delete the old head
        return;
    }

    // Case 2: Deleting a node other than the head
    int cnt = 1;
    while (cnt < pos - 1 && temp != NULL)
    {
        temp = temp->next; // Move to the (pos - 1)th node
        cnt++;
    }

    // If the position is out of bounds
    if (temp == NULL || temp->next == NULL)
    {
        cout << "Position out of bounds" << endl;
        return;
    }

    Node *nodeToDelete = temp->next; // Node to be deleted
    temp->next = nodeToDelete->next; // Bypass the node to be deleted

    // If the node to be deleted is not the last node
    if (nodeToDelete->next != NULL)
    {
        nodeToDelete->next->prev = temp; // Update the prev pointer of the next node
    }

    delete nodeToDelete; // Free memory of the deleted node
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;

    insertAtHead(head, 2);
    insertAtTail(head, 3);
    insertAtPosition(head, 2, 4);
    deleteNode(head, 1);
    deleteNode(head, 2);
    printList(head);

    return 0;
}