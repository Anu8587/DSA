//if arr is subset of another array
#include <bits/stdc++.h>
using namespace std;


 //----------brute force-----
/*bool isSubset(vector<int> &arr1,vector<int> &arr2){
  for(int i = 0;i<arr2.size();i++){
    bool found = false;
    for(int j = 0;j<arr1.size();j++){
      if(arr2[i]==arr1[j]){
        found = true;
        break;
      }
    }

    if(!found){
      return false ;
    }
  }
  return true;
}
*/


int main(){

  //brute force


int n1,n2;
cin>>n1>>n2;
vector<int> arr1(n1);

vector<int> arr2(n2);
for (int i = 0;i<n1;i++){
  cin>>arr1[i];
}
for (int i = 0;i<n2;i++){
  cin>>arr2[i];
}

// --------optimised using hash set 
//first inserting and then searching o(n1+n2)

unordered_set<int> st;
for (int i=0;i<n1;++i){
  st.insert(arr1[i]);
}

for(int i = 0;i<n2;++i){
  if(st.count(arr2[i])==0){
    cout<<"not subset";
    return 0;
  }
}

cout<<"is subset";
return 0;



/*if(isSubset(arr1,arr2)){
  cout<<"yes";
}
else{
  cout<<"no";
}
return 0;*/

}



