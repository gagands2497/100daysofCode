#include <bits/stdc++.h>

using namespace std;

void FIO()
{
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

void sort(int *input, int n)
{
    for (int i = 0; i < n; i++)
    {
        int m = input[i];
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (m > input[j])
            {
                m = input[j];
                index = j;
            }
        }
        swap(input[index], input[i]);
    }
}

int main()
{
    FIO();
    int n;
    cin >> n;
    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        input[i] = rand() % 100;
    }
    sort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
}