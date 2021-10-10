#include <bits/stdc++.h>
using namespace std;

void FIO()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

bool check(int *input,int n){
    // brute force method

    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(input[i] == input[j]){
                return false;
            }
        }
    }
    return true;


    // using sorting
    sort(input,input +n);
    for (int i = 0; i < n - 1;i++){
        if(input[i] == input[i+1]){
            return false;
        }
    }
    return true;
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

    cout << check(input,n) << endl;
}
