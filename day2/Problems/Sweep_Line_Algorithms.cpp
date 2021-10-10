/*
A sweep line algorithm models a problem as a set of events 
that are processed in a sorted order. For example, suppose 
that there is a restaurant and we know the arriving and 
leaving times of all customers on a certain day. Our task 
is to find out the maximum number of customers who visited 
the restaurant at the same time. For example, Fig. 4.7 shows
an instance of the problem where there are four customers 
A, B, C, and D. In this case, the maximum number of 
simultaneous customers is three between A’s arrival and B’s 
leaving. To solve the problem, we create two events for each 
omer: one event for
arrival and another event for leaving. Then, we sort the 
events and go through them according to their times. To find 
the maximum number of customers, we maintain a counter whose 
value increases when a customer arrives and decreases when a 
customer leaves. The largest value of the counter is the 
answer to the problem.

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
    unordered_map<int, int> starting, ending;
    int t_min = INT_MAX, t_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        starting[start]++;
        ending[end]++;
        t_min = min(start, t_min);
        t_max = max(end, t_max);
    }
    int ans = 0;
    int cnt = 0;

    for (int t = t_min; t <= t_max; t++)
    {
        if (starting.find(t) != starting.end())
        {
            cnt += starting.find(t)->second;
        }
        if (ending.find(t) != ending.end())
        {
            cnt -= ending.find(t)->second;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}