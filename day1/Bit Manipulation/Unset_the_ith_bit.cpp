/*
Question : unset the ith bit of a number?

Solve to unset the ith bit of a number a
we can simply take the and of the number n and the not of
2 to the power i.

*/

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
    int i;
    cin >> i;

    int ans = n&(~(1 << i));
    cout << ans << endl;
}