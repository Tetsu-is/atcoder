#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    // allocate n x n array
    int **arr = new int *[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cin >> arr[i][j];
            // cout << "store" << i << "," << j << "=" << arr[i][j] << endl;
        }
    }

    int e = 1;
    for (int i = 0; i < N; i++)
    {
        if (e >= i+1)
        {
            // cout << e << "+" << i << "=" << arr[e][i] << endl;
            e = arr[e-1][i];
            // cout << "store value successfully(" << e << "," << i << endl;
        }
        else
        {
            // cout  << i << "+" << e << "=" << arr[i][e] << endl;
            e = arr[i][e-1];
            // cout << "store value successfully(" << i << "," << e << endl;
        }
    }
    cout << e << endl;
    return 0;
}