#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

// INSERTION
void insert()
{
    node *nn = new node;

    cout << "Enter data: ";
    cin >> nn->data;

    nn->next = NULL;

    if(head == NULL)
    {
        head = nn;
    }
    else
    {
        node *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = nn;
    }

    cout << "Node inserted";
}

// DELETION
void del()
{
    if(head == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        node *temp = head;
        head = head->next;

        delete temp;

        cout << "Node deleted";
    }
}

// SEARCHING
void search()
{
    int value;

    cout << "Enter element to search: ";
    cin >> value;

    node *temp = head;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            cout << "Element found";
            return;
        }

        temp = temp->next;
    }

    cout << "Element not found";
}

// TRAVERSAL
void traverse()
{
    node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

// MAIN
int main()
{
    int choice;

    do
    {
        cout << "\n\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Search";
        cout << "\n4. Traverse";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: insert(); break;
            case 2: del(); break;
            case 3: search(); break;
            case 4: traverse(); break;
            case 5: cout << "Program ended"; break;
            default: cout << "Invalid choice";
        }

    } while(choice != 5);

    return 0;
}
