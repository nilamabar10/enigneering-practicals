#include<iostream>
using namespace std;

int a[10][10];
int visited[10];
int n;

// DFS
void DFS(int v)
{
    visited[v] = 1;

    for(int i = 0; i < n; i++)
    {
        if(a[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

// MAIN
int main()
{
    cout << "Enter number of cities: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    DFS(0);

    int connected = 1;

    for(int i = 0; i < n; i++)
    {
        if(visited[i] == 0)
        {
            connected = 0;
            break;
        }
    }

    if(connected == 1)
    {
        cout << "Graph is connected";
    }
    else
    {
        cout << "Graph is not connected";
    }

    return 0;
}
