#include<iostream>
using namespace std;

#define MAX 5

class queue
{
    int q[MAX];
    int front, rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue();
    void dequeue();
    void display();
};

// ENQUEUE
void queue::enqueue()
{
    int n;

    if(rear == MAX-1)
    {
        cout << "Queue is full";
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        cout << "Enter value: ";
        cin >> n;

        rear++;
        q[rear] = n;

        cout << "Element inserted";
    }
}

// DEQUEUE
void queue::dequeue()
{
    if(front == -1)
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << q[front] << " is deleted";

        front++;

        if(front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// DISPLAY
void queue::display()
{
    for(int i = front; front != -1 && i <= rear; i++)
    {
        cout << q[i] << endl;
    }

    if(front == -1)
    {
        cout << "Queue is empty";
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
