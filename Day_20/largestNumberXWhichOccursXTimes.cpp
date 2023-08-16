#include <bits/stdc++.h>

int findX(vector<int> &arr) {
	// Write your code here	
	unordered_map<int, int> mp;

	for(int i=0; i<arr.size(); i++){
		mp[arr[i]]++;
	}

	int maxi=0;

	for(auto it:mp){
		if(it.first==it.second){
			maxi = max(maxi, it.first);
		}
	}

	return maxi;
}