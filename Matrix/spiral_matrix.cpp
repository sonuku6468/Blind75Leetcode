#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Function to print spiral order traversal of a matrix
void SPT(int a[][100], int m, int n)
{
    /* m - ending row index
       n - ending column index
       i, k - starting row index
       j, l - starting column index */
    int i, k = 0, j, l = 0;

    while (k < m && l < n)
    {
        // Print the first row from the remaining rows
        for (i = k; i < m; ++i)
        {
            cout << a[i][l] << " ";
        }
        k++;

        // Print the last column from the remaining columns
        for (i = k; i < m; ++i)
        {
            cout << a[i][n-1] << " ";
        }
        n--;

        // Print the last row from the remaining rows
        if (k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                cout << a[m-1][i] << " ";
            }
            m--;
        }

        // Print the first column from the remaining columns
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                cout << a[i][l] << " ";
            }
            l++;    
        }        
    }
}

// Function to fill matrix
void fill(int a[][100], int m, int n)
{
    int i, j;
    int count = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = count++;
        }
    }
}

int main()
{
    int a[100][100];
    int m, n;
    cout << "Enter the number of rows (between 1 and 100): ";
    cin >> m;
    cout << "Enter the number of columns (between 1 and 100): ";
    cin >> n;
    fill(a, m, n);
    cout << "The spiral traversal of the matrix is: ";
    SPT(a, m, n);
    return 0;
}