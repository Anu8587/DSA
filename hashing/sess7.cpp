 #include<bits/stdc++.h>
 using namespace std;
 int main(){
   int n,k;
  cin>>n>>k;

  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];
 }
//--------brute force-------------
/*  int maxlength = 0;
 int minlength = INT_MAX;
 pair<int, int> max = {-1, -1};
 pair<int, int> min= {-1, -1};
 for(int i = 0;i<n;i++){
  int sum=0;
  for(int j = i;j<n;j++){
    sum = sum+arr[j];
    if (sum ==k ){
      int len = j - i + 1;
       if (len > maxlength) {
           maxlength = len;
           maxRange = {i, j};  
                }

       if (len < minlength) {
          minlength = len;
          minRange = {i, j};
    }  
  }
 }
  if (maxlength == 0) {
        cout << "No";
    } else {
        cout << maxlength<<"range"<<max.first<<"to"<<max.second ;
        cout <<  minlength<< cout << minlength<<"range"<<min.first<<"to"<<min.second;
    }
        
    int min_length = x.first
    if(mp2.find (x) =  mp3. find . second (y))
    */

    
//-----------optimised
#include <bits/stdc++.h>
using namespace std;

int largestSubarraySumK(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int prefix = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefix += arr[i];

        if (prefix == k)  
            maxLen = i + 1;

        if (mp.find(prefix - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefix - k]);
        }

        if (mp.find(prefix) == mp.end()) {
            mp[prefix] = i; 
        }
    }
    return maxLen;
}

    return 0;
}