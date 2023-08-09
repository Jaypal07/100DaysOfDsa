#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    if(str1.size() != str2.size()) return false;

    unordered_map<int, int> mp;
    unordered_map<int, int> ump;

    for(int i=0; i<str1.size(); i++){
        mp[str1[i]]++;
    }

    for(int i=0; i<str2.size(); i++){
        ump[str2[i]]++;
    }

    for(int i=0; i<str1.size(); i++){
        int cnt = mp[str1[i]];
        if(cnt>ump[str1[i]]){
            return false;
        }
    }

    return true;
}