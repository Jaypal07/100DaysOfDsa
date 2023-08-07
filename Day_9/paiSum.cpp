#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int ans = 0;
	int i=0; 
	int j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==target){
			ans++;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]<target) i++;
		else j--;
	}
	if(ans) return ans;
	return -1;
}