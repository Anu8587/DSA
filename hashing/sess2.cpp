#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;

  vector<int> arr(n);
  for (int i = 0;i<n;i++){
    cin>>arr[i];
  }

 /*  int count = 0;
  for(int i = 0;i<n;++i){
    for(int j = i+1;j<n;j++){
      int sum = arr[i] +arr[j];

      if(sum == k){
        count++;
      }
    }
  }
  cout<<count; */


  int count = 0;
  unordered_map<int, int> nums;
  for(int i = 0;i<n;i++){
    int complement = k - arr[i];

    if(nums.find(complement) != nums.end()){
      count+=nums[complement];
    }

    nums[arr[i]]++;
  }
  cout<<count;
}

