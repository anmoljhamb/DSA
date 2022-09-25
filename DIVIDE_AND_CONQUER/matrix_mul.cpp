#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef vector<vector<int>> vv;


class Matrix
{
private:
    int size;
    vv matrix;
public:
    Matrix ( vv _matrix ) : matrix(_matrix)
    {}


    Matrix(int s) : size(s)
    {
        matrix = vv(s, vector<int>(s, 0));
    }

    void display(string sep=", ", string end="\n")
    {
        for ( auto i : matrix )
        {
            for ( auto x : i )
            {
                cout << x << sep;
            }
            cout << end;
        }
    }

    int getSize() const
    {
        return matrix.size();
    }

    vector<int> &operator[](int n)
    {
        return matrix[n];
    }

    vector<int> row(int n)
    {
        return matrix[n];
    }

    vector<int> col(int n)
    {
        vector<int> ans;
        for ( int i=0; i<size; i++)
        {
            ans.push_back(matrix[i][n]);
        }
        return ans;
    }

    Matrix operator+(Matrix second) const
    {
        int n = second.getSize();
        Matrix Sol(n);

        for ( int i=0; i<n; i++ )
        {
            for ( int j=0; j<n; j++ )
            {
                Sol[i][j] = matrix[i][j] + second[i][j];
            }
        }

        return Sol;
    }
};




void multiply(Matrix A, Matrix B)
{

}


int main()
{
    int N = 4;
    Matrix A(N), B(N);
    int count = 0;
    for ( int i=0; i<N; i++ )
    {
        for ( int j=0; j<N; j++ )
        {
            A[i][j] = ++count;
        }
    }
    A.display();
    cout << endl;
    for ( int i=0; i < N; i++)
    {
        B[i] = A[N-i-1];
    }
    B.display();
    cout << A.getSize();
    return 0;
}