#include "bits/stdc++.h"
using namespace std;

void FIO()
{
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
}

int getPivot(int *input, int *temp, int start, int end)
{
  int ans = start;
  int a = input[start];
  for (int i = start; i <= end; i++)
  {
    if (input[i] < a)
    {
      temp[ans++] = input[i];
    }
  }
  int k = ans + 1;
  temp[ans] = a;
  for (int i = start; i <= end; i++)
  {
    if (input[i] >= a)
    {
      temp[k++] = input[i];
    }
  }

  for (int i = start; i <= end; i++)
  {
    input[i] = temp[i];
  }
  return ans;
}

void sort(int *input, int *temp, int start, int end)
{
  if (start < end)
  {
    int p = getPivot(input, temp, start, end);
    sort(input, temp, start, p - 1);
    sort(input, temp, p + 1, end);
  }
}

int main()
{

  FIO();
  int n;
  cin >> n;
  int *input = new int[n];
  int *temp = new int[n];

  for (int i = 0; i < n; i++)
  {
    input[i] = rand() % 100;
  }
  int start = 0, end = n - 1;
  sort(input, temp, start, end);
  for (int i = 0; i < n; i++)
  {
    cout << input[i] << " ";
  }
}
