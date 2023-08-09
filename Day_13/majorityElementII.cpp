#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int cnt = n/3;
    vector<int> ans;

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){
        if(it.second>cnt){
            ans.push_back(it.first);
        }
    }

    return ans;
    
}