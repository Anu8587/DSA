#include<bits/stdc++.h>
using namespace std;
//--------brute force
/*
int maxFreq(vector<int>&arr){
  int maxCount=0;
  int maxElement=0;
  for(int i = 0;i<arr.size();++i){
    bool before = false;
    for(int k=0;k<i;++k){
      if(arr[k]==arr[i]){
       before = true;
       break;
      }
    }
    if(before) continue;
    int count=0;
    for(int j=0;j<arr.size();++j){
      if(arr[j] == arr[i]) count++;
    }
    if(count>maxCount){
      maxCount = count;
      maxElement = arr[i];
    }
  }
  return maxElement;
}
int minFreq(vector<int>&arr){
  int minCount = INT_MAX;
    int minElement = 0;

    for (int i = 0; i < arr.size(); ++i) {
        bool before = false;
        for (int k = 0; k < i; ++k) {
            if (arr[k] == arr[i]) {
                before = true;
                break;
            }
        }
        if (before) continue;

        int count = 0;
        for (int j = 0; j < arr.size(); ++j) {
            if (arr[j] == arr[i]) count++;
        }

        if (count < minCount) {
            minCount = count;
            minElement = arr[i];
        }
    }

    return minElement;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i = 0;i<n;++i){
    cin>>arr[i];
  }

  cout<<maxFreq(arr)<<endl;
  cout<<minFreq(arr);

}*/
//----------optimised using hash map
int main(){
 
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;++i){
    cin>>arr[i];
  }
unordered_map<int,int>hash;
int maxfreq =0,maxelement = 0;
int minfreq = n+1, minelement = 0;

for (int i = 0;i<n;i++){
  if(hash.find(arr[i])==hash.end()){
    hash[arr[i]] = 1;
  }else{
    hash[arr[i]]++;
  }
}
for(auto &p: hash) //iterating over maps
{
  int element = p.first;
  int count = p.second;
  if (maxfreq <count){
    maxfreq = count;
    maxelement = element;
  }
  if (minfreq > count){
    minfreq = count;
    minelement = element;
  }
  
}
cout<<maxfreq<<" "<<maxelement<<endl;
cout<<minfreq<<" "<<minelement;


}