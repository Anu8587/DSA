#include <bits/stdc++.h>
using namespace std;
int main(){
/*  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    
  }
  int q;
  cin >> q;
  int count = 0;
  for(int i = 0; i<q;i++){
    int query;
    cin>>query;

    int count = 0;
    for(int j = 0;j<n;j++){
      if(arr[j] == query){

      count++;
    }
  }
    cout<<count;
    
}
return 0;*/

//-------- using hash array
int n,q;
cin>>n;
int arr[n];
/*

int hash[51]= {0};
for(int i = 0; i<n;i++) {
  cin>> arr[i];
  hash[arr[i]] = hash[arr[i]] +1;
}
*/
unordered_map<int,int>hash_map;
for(int i = 0; i<n;i++) {
  cin>> arr[i];
  hash_map[arr[i]] = hash_map[arr[i]] +1;
}

//--------using hash map for o(n) time complexity



cin>>q;
for(int i = 0;i<q;i++){
  int query;
  cin>> query;
//int count = hash[query];
  int count = hash_map[query];
  cout<<count;
}
return 0; 


}