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
        // Destructor body (Currently, no specific dynamic memory management here)
        std::cout << "Node with data " << data << " is being deleted." << std::endl;
    }
};

class LinkedList
{
    // pointer to the first node in the list
    Node *head;

public:
    LinkedList() : head(NULL)
    {
        cout << "Head is initialized to: " << head << endl;
    };  

    // function to insert a new node at the beginning
    void InsertAtStart(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);

        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int value, int position)
    {
        if (position == 1)
        {
            InsertAtStart(value);
            return;
        }
        Node *newNode = new Node(value);
        Node *temp = head;
        int cnt = 1;
        while (cnt < position - 1 && temp)
        {
            temp = temp->next;
            cnt++;
        }
        if (!temp)
        {
            cout << "Position out of range." << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFromStart()
    {
        if (!head)
        {
            cout << "the list is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd()
    {
        if (!head)
        {
            cout << "the list is empty" << endl;
            return;
        }
        if (!head->next)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void deleteFromPosition(int pos)
    {
        if (pos == 1)
        {
            deleteFromStart();
            return;
        }
        Node *temp = head;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cout << temp->data << endl;
            cnt++;
        }

        if (!temp || !temp->next)
        {
            cout << "Position out of range." << endl;
            return;
        }
        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        // Delete the node
        delete nodeToDelete;
    }

    void reverseLinklist()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }

  

    void printList()
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList newList;
    newList.InsertAtStart(1);
    newList.InsertAtStart(2);
    newList.insertAtEnd(3);
    newList.insertAtEnd(4);
    newList.insertAtEnd(6);
    newList.insertAtEnd(8);
    newList.insertAtPosition(5, 3);
    newList.deleteFromStart();
    newList.deleteFromEnd();
    newList.deleteFromPosition(2);

    // newList.reverseLinklist();
    newList.reverseLinkListGroup(2);
    newList.printList();
    return 0;
}