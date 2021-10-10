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
  int a = input[0];
  int ans = 0;

  for (int i = start; i <= end; i++)
  {
    if (input[i] < a)
    {
      temp[start + ans++] = input[i];
    }
  }
  int k = ans;
  for (int i = start; i <= end; i++)
  {
    if (input[i] >= a)
    {
      temp[start + k++] = input[i];
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
    int pivot = getPivot(input, temp, start, end);
    sort(input, temp, start, pivot);
    sort(input, temp, pivot + 1, end);
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
