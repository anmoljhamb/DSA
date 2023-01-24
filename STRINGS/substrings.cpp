#include <bits/stdc++.h>
using namespace std;

void printSubstrings(string S)
{
    int N = S.size();
    for (int i = 0; i < N; i++)
    {
        string subString = "";
        for (int j = i; j < N; j++)
        {
            subString += S[j];
            cout << subString << endl;
        }
    }
}

int main()
{
    string sample = "abcd";
    printSubstrings(sample);

    return 0;
}