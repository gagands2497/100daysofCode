#include <bits/stdc++.h>

using namespace std;

void FIO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

void N_queen(vector<int> &col, vector<int> &diag1, vector<int> &diag2, int y, int &ans, int &n)
{
    if (y == n)
    {
        ans++;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        if (!col[x] && !diag1[x + y] && !diag2[x - y + n - 1])
        {
            col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
            N_queen(col, diag1, diag2, y + 1, ans, n);
            col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
        }
    }
}

int main()
{
    FIO();
    int n;
    cin >> n;
    vector<int> col(n, 0), diag1(2*n, 0), diag2(2*n, 0);
    int ans = 0;
    N_queen(col, diag1, diag2, 0, ans, n);
    cout << ans << endl;
}