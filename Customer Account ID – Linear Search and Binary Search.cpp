#include<iostream>
using namespace std;

// LINEAR SEARCH
int linearSearch(int a[], int n, int key)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        count++;

        if(a[i] == key)
        {
            cout << "Linear Search: Account found at position " << i+1;
            cout << "\nComparisons: " << count;
            return i;
        }
    }

    cout << "Linear Search: Account not found";
    cout << "\nComparisons: " << count;

    return -1;
}

// BINARY SEARCH
int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n-1;
    int count = 0;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        count++;

        if(a[mid] == key)
        {
            cout << "\nBinary Search: Account found at sorted position " << mid+1;
            cout << "\nComparisons: " << count;
            return mid;
        }
        else if(key < a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    cout << "\nBinary Search: Account not found";
    cout << "\nComparisons: " << count;

    return -1;
}

int main()
{
    int a[100], b[100], n, key, temp;

    cout << "Enter number of customer accounts: ";
    cin >> n;

    cout << "Enter account IDs:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    cout << "Enter account ID to search: ";
    cin >> key;

    // SORTING COPY FOR BINARY SEARCH
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(b[j] > b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    linearSearch(a, n, key);

    binarySearch(b, n, key);

    return 0;
}
