/*
Question 
To calculate the power of two

Solve :
we Know that 
If we do left shift by 1 the number will get multiply by two
So there for to get the 2 to the power x we left shift 1 x times.

*/

#include <bits/stdc++.h>

using namespace std;

void FIO()
{
#ifndef ONLINE_JEDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

int main()
{
    FIO();
    int x;
    cin >> x;
    cout << "2 to the power x is " << (1 << x)<<endl;
}