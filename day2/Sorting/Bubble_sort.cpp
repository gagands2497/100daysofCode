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
    int n;
    cin >> n;
    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        input[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (input[i] > input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
