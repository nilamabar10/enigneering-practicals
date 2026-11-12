#include<iostream>
using namespace std;

int main()
{
    int a[100], n, temp;

    cout << "Enter number of employees: ";
    cin >> n;

    cout << "Enter employee salaries:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // SELECTION SORT
    for(int i = 0; i < n-1; i++)
    {
        int min = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout << "\nSalaries in ascending order:\n";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n\nTop five highest salaries:\n";

    for(int i = n-1; i >= 0 && i >= n-5; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}
