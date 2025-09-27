#include<bits/stdc++.h>
using namespace std;
/*
------------brute force---------
int getsum(vector<int>&arr ,int l, int r){
  int sum = 0;
  for(int i = l;i<=r;i++){
    sum +=arr[i];
  }
  return sum;
}
int main(){
  int n,q;
  cin>>n>>q;

  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];

  }

  for(int i = 0;i<q;i++){
    int l,r;
    cin>>l>>r;
    cout<<getsum(arr,l,r);
  }
  return 0; */


//optimised prefix-sum

// prefix[i] = sum[0...i]
//prefix=array 
//prefix[i]=prefix[i-1]+arr[i]


int main(){
  int n,q;
  cin>>n>>q;

  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//building prefix summ array
vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + arr[i];
    } 
for(int i = 0;i<q;i++){
    int l,r;
    cin>>l>>r;
    // to find sum
    cout<<prefix[r+1]-prefix[l];
  }
  return 0;
}