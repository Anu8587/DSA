#include<bits/stdc++.h>
using namespace std;
/* 
//////-------------brute---------------
bool checkdistance(vector<int>& arr,int k,int n){
 
  for(int i = 0;i<n;++i){
    for(int j = i+1;j<n && j<= i+k;++j){
      if(arr[i] ==  arr[j]){
        return true;
      }

    }
  }
  return false;
} 
int main(){
int n,k;

cin>>n;
cin>>k; 
vector<int> arr(n);
for (int i = 0;i<n;++i){
  cin>>arr[i];
}
cout<<checkdistance(arr,k,n);
return 0;
}

*/
///------------hashing------------
bool check(vector<int> &nums,int k){
  unordered_map<int,int> indice;

  for(int i = 0; i<nums.size();++i){
    if (indice.find(nums[i] )!= indice.end() && i-indice[nums[i]] <= k ){
      return true;
    }
    indice[nums[i]] = i;
  }
  return false;
}
int main(){
int n,k;
cin>>n>>k;
vector<int> nums(n);
for(int i = 0;i<n;i++){
  cin>>nums[i];
}
cout<<check(nums,k);
}
