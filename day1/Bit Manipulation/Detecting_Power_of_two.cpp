/*
Question : Given an integer n output yes if the n is power of 2 else false
in O(1) time complexity

Solution :

There is a pattern between the power of two numbers 
everytime the power of two number occurs the previous number has all bit set 
and also one less number of bit 
For eg : 7 = 111 and 8 = 1000 in binary format 
So therefore if we take and of n and (n-1) the output must be 0 for the number n 
to be a power of two.

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
    if ((n & (n - 1)) == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}