#include<iostream>
using namespace std;

class stack
{
    struct node
    {
        int data;
        node *next;
    };

    node *top;

public:
    stack()
    {
        top = NULL;
    }

    void push();
    void pop();
    void peek();
    void display();
};

// PUSH
void stack::push()
{
    node *nn = new node;

    cout << "Enter value: ";
    cin >> nn->data;

    nn->next = top;
    top = nn;

    cout << "Element inserted";
}

// POP
void stack::pop()
{
    if(top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        node *temp = top;

        cout << temp->data << " is deleted";

        top = top->next;

        delete temp;
    }
}

// PEEK
void stack::peek()
{
    if(top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Top element is: " << top->data;
    }
}

// DISPLAY
void stack::display()
{
    node *temp = top;

    if(top == NULL)
    {
        cout << "Stack is empty";
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
    stack s;
    int choice;

    do
    {
        cout << "\n\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.peek(); break;
            case 4: s.display(); break;
            case 5: cout << "Program ended"; break;
            default: cout << "Invalid choice";
        }

    } while(choice != 5);

    return 0;
}
