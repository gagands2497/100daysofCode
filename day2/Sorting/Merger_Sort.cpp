#include <bits/stdc++.h>
using namespace std;

void FIO()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
}

void merger(int *input,int *temp,int start,int end){
  int mid = (start + end)/2;

  int i = start,j = mid + 1,k  = start;
  while(i<=mid && j<=end){
    if(input[i] < input[j]){
      temp[k++] = input[i++];
    }else{
      temp[k++] = input[j++];
    }
  }

  while(i<=mid){
    temp[k++] = input[i++];
  }

  while(j<=end){
    temp[k++]  = input[j++];
  }

  for(int i = start;i<=end;i++){
    input[i] = temp[i];
  }
}

void sort(int *input,int *temp,int start,int end){
  if(start < end){
    int mid = (start + end)/2;
    sort(input,temp,start,mid);
    sort(input,temp,mid + 1,end);
    merger(input,temp,start,end);
  }
}

int main()
{
    FIO();
    int n;
    cin>>n;
    int *input = new int[n];

    for(int i = 0;i<n;i++){
      input[i] = rand()%100;
    }

    int *temp = new int[n];

    sort(input,temp,0,n-1);

    for(int i = 0;i<n;i++){
      cout<<input[i]<<" ";
    }
    cout<<endl;

}
