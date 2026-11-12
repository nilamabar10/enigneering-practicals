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

    // BUBBLE SORT
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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
