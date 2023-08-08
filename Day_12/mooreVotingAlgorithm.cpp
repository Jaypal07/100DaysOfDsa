#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt = 0;
	int ele;
	for(int i=0; i<n; i++){
		if(cnt==0){
			ele = arr[i];
			cnt=1;
		}else if(arr[i]==ele){
			cnt++;
		}else{
			cnt--;
		}
	}
	
	int majority = 0;

	for(int i=0; i<n; i++){
		if(arr[i]==ele) majority++;
	}

	if(majority>n/2) return ele;

	return -1;

}