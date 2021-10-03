/*
Question : Set the ith bit of a number to 1 (set bit).

Solve:

we know that the ith bit of the 2 to the power i is set ( 1 ).

To make the ith bit of number set . We can just take the Or with the 2 to the power i.

NOTE :- i is zero based.
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
    n = (n | (1 << i));
    cout << n;
}