#include <bits/stdc++.h>

string maxRoomBooked(vector<string> arr, int n) {
    // Write your code here.
    unordered_map<string, char> mp;
    for(auto i: arr)
        mp[i]++;
    
    vector<pair<int,string>> room;
    for(auto x: mp){
         room.push_back({x.second,x.first});
     }

    sort(room.rbegin(), room.rend());

    int eq = room[0].first;
    string ans = room[0].second;

    for(int i=0; i<room.size(); i++){
        if(room[i].first==eq && room[i].second<ans){
            ans = room[i].second;
        }
    }

    return ans.substr(1);
}