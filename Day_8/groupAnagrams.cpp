#include <bits/stdc++.h> 
vector<vector<string>> getGroupedAnagrams(vector<string> &str, int n)
{
    // Write your code here.
    unordered_map<string, vector<string>> mapping;
    string temp;

    for(int i = 0; i < n; i++){
        temp = str[i];
        sort(str[i].begin(), str[i].end());
        mapping[str[i]].push_back(temp);
    }

    vector<vector<string>> ans;

    for(auto i = mapping.begin(); i != mapping.end(); i++){
        ans.push_back(i->second);
    }

    return ans;
}