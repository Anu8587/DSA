

  int count = 0;
  unordered_map<int, int> nums;
  for(int i = 0;i<n;i++){
    int complement = k - arr[i];

    if(nums.find(complement) != nums.end()){
      count++;
    }

    nums[arr[i]]++;
  }
  cout<<count;
}
