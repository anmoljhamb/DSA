#include <bits/stdc++.h>
using namespace std;

/*
Given a matrix like,
1 2 3
4 5 6
7 8 9
rotate it to get
3 6 9
2 5 8
1 4 7
*/

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for ( int i=0; i<n; i++ )
    {
        for ( int j=0; j<n; j++ )
        {
            if ( i < j )            
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    for ( int j=0; j<n; j++ )
    {
        for ( int i=0; i<n/2; i++ )
        {
            swap(matrix[i][j], matrix[n-i-1][j]);
        }
    }

}

int main()
{
    int n = 3;
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = ++count;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotate(matrix);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}