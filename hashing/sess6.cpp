#include <bits/stdc++.h>
using namespace std;

int sumOptimized(vector<int>& arr, int k){
 int n = arr.size();
 vector<int> prefix(n+1, 0);
 unordered_map<int,int > freq;
 
 int count = 0;
 freq[0] = 1;
 for(int i = 0;i<n;++i){

  
  prefix[i+1] = prefix[i] + arr[i];


  if(freq.find(prefix[i+1]-k) != freq.end()){
    count= count + freq[prefix[i+1]-k];
  }
  freq[prefix[i+1]]++;
 }
 return count;

 
}

int main(){
  int n,k;
  cin>>n>>k;

  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];
}
/* int count =0;
// brute force 1
for (int j = 0;j<n;j++){
  int current_sum =0;
  for(int i = j;i>=0;i--){
    current_sum += arr[i];
    if (current_sum==k){
      count++;
    }
  }
}

// brute force 2 tc:o(n2) prefix sum method to find number of subarrays with sum == k
vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + arr[i];
    } 
for (int start = 0; start < n; start++) {
    for (int end = start; end < n; end++) {
        if (prefix[end+1] - prefix[start] == k)
            count++;
    }
}
cout<<count;
 */

 // optimized using hashmap tc: o(n)
}