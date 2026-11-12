#include<iostream>
using namespace std;

class queue
{
    struct node
    {
        int data;
        node *next;
    };

    node *front, *rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue();
    void dequeue();
    void display();
};

// ENQUEUE
void queue::enqueue()
{
    node *nn = new node;

    cout << "Enter value: ";
    cin >> nn->data;

    nn->next = NULL;

    if(front == NULL)
    {
        front = rear = nn;
    }
    else
    {
        rear->next = nn;
        rear = nn;
    }

    cout << "Element inserted";
}

// DEQUEUE
void queue::dequeue()
{
    if(front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        node *temp = front;

        cout << temp->data << " is deleted";

        front = front->next;

        if(front == NULL)
        {
            rear = NULL;
        }

        delete temp;
    }
}

// DISPLAY
void queue::display()
{
    node *temp = front;

    if(front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

// MAIN
int main()
{
    queue q;
    int choice;

    do
    {
        cout << "\n\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: q.enqueue(); break;
            case 2: q.dequeue(); break;
            case 3: q.display(); break;
            case 4: cout << "Program ended"; break;
            default: cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}
