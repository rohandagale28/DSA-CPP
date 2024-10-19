#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Node with data " << data << " is being deleted." << endl;
    }
};

void insertAtHead(Node *&tail, int d)
{
    Node *newNode = new Node(d);

    // Case: empty list
    if (!tail)
    {
        tail = newNode;
        newNode->next = newNode; // Point to itself to form a circular structure
        return;
    }
    else
    {
        // Inserting at the beginning of a non-empty list
        newNode->next = tail->next;
        tail->next = newNode;
    }
}

void insertAtPosition(Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(tail, d);
        return;
    }
    Node *newNode = new Node(d);
    Node *head = tail->next;
    int cnt = 1;
    while (cnt < pos)
    {
        head = head->next;
        cnt++;
    }
    if (head->next == tail->next)
    {
        newNode->next = tail->next;
        head->next = newNode;
        return;
    }
    else
    {
        newNode->next = head->next;
        head->next = newNode;
    }
}

void insertAtEnd(Node *tail, int d)
{
    Node *newNode = new Node(d);
    if (!tail)
    {
        tail = newNode;
        newNode->next = newNode; // Point to itself to form a circular structure
        return;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
    }
}

void print(Node *&tail)
{
    // Case: empty list
    if (tail == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }

    // Traverse the circular linked list
    Node *head = tail->next;
    cout << "The elements in the CLL are: ";
    do
    {
        cout << head->data << " ";
        head = head->next;
    } while (head != tail->next); // Loop until we reach the starting node again

    cout << endl;
}

int main()
{
    Node *tail = NULL; // Initially, the list is empty

    insertAtHead(tail, 1); // Insert first element (1)
    insertAtHead(tail, 2); // Insert second element (2) at the head
    insertAtHead(tail, 3); // Insert third element (3) at the head
    insertAtPosition(tail, 1, 4);
    insertAtPosition(tail, 3, 5);
    insertAtPosition(tail, 6, 6);
    insertAtEnd(tail, 8);
    print(tail); // Print the circular linked list

    return 0;
}
