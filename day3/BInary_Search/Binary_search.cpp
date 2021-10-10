#include <bits/stdc++.h>
using namespace std;

void FIO()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

int main()
{
    FIO();

    int n = rand() % 100;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        input[i] = rand() % 100;
    }

    int key = rand() % 100;
    sort(input, input + n);
    int i = 0, j = n - 1;

    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (input[mid] > key)
        {
            i = mid + 1;
        }
        else if (input[mid] < key)
        {
            j = mid - 1;
        }
        else
        {
            cout << "FOUND" << endl;
            break;
        }
    }

    if (i > j)
    {
        cout << "NOT FOUND" << endl;
    }
}