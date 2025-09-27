#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;

  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];

  }
  // brute force
  int count = 0;
  /* 
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      int diff = abs(arr[i] - arr[j]);
      if(diff == k){
        count ++;
      }
    }
  }
  cout<<count; */

  // optimised

unordered_map<int,int> mp;
for(int i = 0;i<n;i++){

  int req1 = arr[i]+k;
  if (mp.find(req1) != mp.end()){
    count= count +mp[req1];
  
  }
  int req2 = arr[i] - k;  
  if (mp.find(req2) != mp.end()) {
    count = count + mp[req2];
    }
    
  mp[arr[i]]++;
}
cout<<count;
}