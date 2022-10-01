#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {0, 0, 1};

void gfSeries(int N)
{
    if (N == 0)
    {
        return;
    }

    gfSeries(N - 1);

    if (N >= 3)
    {
        arr.push_back(arr[N - 2] * arr[N - 2] - arr[N - 1]);
    }

    cout << arr[N] << " ";
    return;
}

int main()
{
    gfSeries(6);
    return 0;
}