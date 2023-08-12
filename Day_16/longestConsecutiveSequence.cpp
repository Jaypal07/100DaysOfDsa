#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int ans=1,s=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]==arr[i]+1)
            s+=1;
        else if(arr[i+1]==arr[i])
            continue;
        else
            s=1;
        if(s>ans)
            ans=s;
    }
    return ans;
}