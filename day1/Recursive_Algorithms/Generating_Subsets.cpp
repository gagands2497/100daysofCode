#include <bits/stdc++.h>

using namespace std;

void FIO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDJE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

void make_subsets(vector<int> &input, vector<vector<int>> &subsets, vector<int> subset, int i, int n)
{
    if (i == n)
    {
        subsets.push_back(subset);
        return;
    }
    else
    {
        // eithe include the ith element or not
        //so therefore
        subset.push_back(input[i]);
        make_subsets(input, subsets, subset, i + 1, n); //including the ith element in the subset
        subset.pop_back();
        make_subsets(input, subsets, subset, i + 1, n); //not including the ith element in the subset
    }
}

int main()
{
    FIO();
    int n;
    cin >> n;
    vector<int> input(n);
    for (int &x : input)
    {
        cin >> x;
    }
    vector<vector<int>> subsets;
    vector<int> subset;
    make_subsets(input, subsets, subset, 0, n);

    for (auto v : subsets)
    {
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}