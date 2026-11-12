#include<iostream>
using namespace std;

int main()
{
    int a[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    do
    {
        cout << "\n\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Search";
        cout << "\n4. Update";
        cout << "\n5. Display";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                if(pos < 1 || pos > n+1 || n == 100)
                {
                    cout << "Invalid position or array full";
                }
                else
                {
                    for(int i = n; i >= pos; i--)
                    {
                        a[i] = a[i-1];
                    }

                    a[pos-1] = value;
                    n++;

                    cout << "Element inserted";
                }
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;

                if(pos < 1 || pos > n)
                {
                    cout << "Invalid position";
                }
                else
                {
                    for(int i = pos-1; i < n-1; i++)
                    {
                        a[i] = a[i+1];
                    }

                    n--;

                    cout << "Element deleted";
                }
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> value;

                for(int i = 0; i < n; i++)
                {
                    if(a[i] == value)
                    {
                        cout << "Element found at position " << i+1;
                        break;
                    }

                    if(i == n-1)
                    {
                        cout << "Element not found";
                    }
                }
                break;

            case 4:
                cout << "Enter position to update: ";
                cin >> pos;

                if(pos < 1 || pos > n)
                {
                    cout << "Invalid position";
                }
                else
                {
                    cout << "Enter new value: ";
                    cin >> value;

                    a[pos-1] = value;

                    cout << "Element updated";
                }
                break;

            case 5:
                cout << "Array elements: ";

                for(int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                break;

            case 6:
                cout << "Program ended";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 6);

    return 0;
}
