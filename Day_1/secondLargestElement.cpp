#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    if(n<2) return -1;
    
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(maxi<arr[i]) maxi=arr[i];
    }

    int cnt =0;
    for(int i=0; i<n;i++){
        if(maxi==arr[i]) cnt++;
    }
    if(cnt==n) return -1;

    int largest = INT_MIN;
    int sLargest = 0;
    for(int i=0; i<n; i++){
        if(largest<arr[i]){
            sLargest = largest;
            largest = arr[i];
        }
        if(largest>arr[i] && sLargest<arr[i]){
            sLargest = arr[i];
        }
        // cout<<sLargest<<" ";
    }
    return sLargest;
}

int main(){
	
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0; i<n; i++){
		int element =0;
		cin>>element;
		arr.push_back(element);
	}
	
	int ans = findSecondLargest(n, arr);
	cout<<ans;
	return 0;
}