#include<iostream>
#include<string>
using namespace std;

struct node
{
    char data;
    node *left;
    node *right;
};

node *st[100];
int top = -1;

// CHECK OPERATOR
int isOperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;

    return 0;
}

// PUSH
void push(node *nn)
{
    top++;
    st[top] = nn;
}

// POP
node* pop()
{
    return st[top--];
}

// CREATE EXPRESSION TREE
node* createTree(string prefix)
{
    for(int i = prefix.length()-1; i >= 0; i--)
    {
        node *nn = new node;

        nn->data = prefix[i];
        nn->left = NULL;
        nn->right = NULL;

        if(isOperator(prefix[i]))
        {
            nn->left = pop();
            nn->right = pop();
        }

        push(nn);
    }

    return pop();
}

// POSTORDER TRAVERSAL
void postorder(node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data;
    }
}

// DELETE TREE
void deleteTree(node *root)
{
    if(root != NULL)
    {
        deleteTree(root->left);
        deleteTree(root->right);

        delete root;
    }
}

// MAIN
int main()
{
    string prefix;
    node *root;

    cout << "Enter prefix expression: ";
    cin >> prefix;

    root = createTree(prefix);

    cout << "Postfix expression: ";
    postorder(root);

    deleteTree(root);

    cout << "\nTree deleted";

    return 0;
}
