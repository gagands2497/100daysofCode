/*
Given n events with their starting
and ending times, find a schedule that includes as many 
events as possible. For example, Fig. 4.9 shows an instance
of the problem where an optimal solution is to select two 
events. In this problem, there are several ways how we could 
sort the input data. One
strategy is to sort the events according to their lengths and 
select as short events as possible. However, this strategy 
does not always work, as shown in Fig. 4.10. Then, another 
idea is to sort the events according to their starting times
and always select the next possible event that begins as 
early as possible. However, we can find a counterexample 
also for this strategy, shown in Fig. 4.11. A third idea 
is to sort the events according to their ending times and
always select
the next possible event that ends as early as possible. 
It turns out that this algorithm always produces an optimal 
solution. To justify this, consider what happens if we first 
select an event that ends later than the event that ends as 
early as possible. Now, we will have at most an equal number 
of choices left how we can select the next event. Hence, 
selecting an event that ends later can never yield a better 
solution, and the greedy algorithm is correct.
*/

#include <bits/stdc++.h>
using namespace std;

void FIO()
{
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
    // sorting the elements according to the ending time
}

int main()
{
    FIO();
    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        v.push_back({s, e});
    }

    sort(v.begin(), v.end(), compare);

    int ans = 0;
    int last = v[0].second;
    int i = 0;
    while (i < n)
    {
        if (v[i].first >= last)
        {
            last = v[i].second;
            ans++;
        }
        i++;
    }

    cout << ans << endl;
}