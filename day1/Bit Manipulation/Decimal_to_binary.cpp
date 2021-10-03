/*
Convert a number from decimal to binary

Solution :
we can use the standard approch by dividing and taking
mod wth the 2 until the n become 0 .
But using this answer will be in reverse format
we need to reverse the string ans obtained.

2nd Method will be to just check for the ith bit 
that is it is set or not.
check from the left most bit.

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
    string ans = "";
    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1 << i)))
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    cout << ans << endl;
}
