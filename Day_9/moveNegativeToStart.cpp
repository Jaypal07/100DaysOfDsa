#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int s = 0;
    int e = nums.size()-1;

    while(s<e){
        if(nums[s]>=0 && nums[e]<0){
            swap(nums[s], nums[e]);
            ++s;
            --e;
        }
        if(nums[s]<0) ++s;
        if(nums[e]>=0) --e;
        
    }
    // for(auto i: nums){
    //     cout<<i<<" ";
    // }
    return nums;
}