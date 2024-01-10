#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
int col = matrix[0].size();
int a[row][col];
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
a[j][row-i-1] = matrix[i][j];
}
}
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
matrix[i][j] = a[i][j];
}
}
    }
int main()
{
    //code
    vector<vector<int>> mat = {{5, 1, 9},
    {2, 4, 8},
    {3, 6, 7}};
    cout << "Original Matrix: \n";
    for (auto x : mat)
    {
        for (auto y : x)
        cout << y << " ";
        cout << "\n";
        }
        rotate(mat);
        cout << "\nRotated Matrix:\n";
        for (auto x : mat)
        {
            for (auto y : x)
            cout << y << " ";
            cout << "\n";
            }
            return 0;
            }

