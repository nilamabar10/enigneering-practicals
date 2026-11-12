#include<iostream>
using namespace std;

#define MAX 5

class stack
{
    int s[MAX];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void push();
    void pop();
    void peek();
    void display();
};

// PUSH
void stack::push()
{
    int n;

    if(top == MAX-1)
    {
        cout << "Stack is full";
    }
    else
    {
        cout << "Enter value: ";
        cin >> n;

        top++;
        s[top] = n;

        cout << "Element inserted";
    }
}

// POP
void stack::pop()
{
    if(top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << s[top] << " is deleted";
        top--;
    }
}

// PEEK
void stack::peek()
{
    if(top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Top element is: " << s[top];
    }
}

// DISPLAY
void stack::display()
{
    if(top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            cout << s[i] << endl;
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
