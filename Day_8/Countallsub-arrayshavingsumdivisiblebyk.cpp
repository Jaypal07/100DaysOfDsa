#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    int ans = 0;

    vector<int> cnt(k, 0);
    long long sum = 0;
    cnt[0]++;

    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        int rem = sum%k;
        if(rem<0){
            rem+=k;
        }
        if(cnt[rem]){
            ans+=cnt[rem];
        }
        cnt[rem]++;
    }

    return ans;
}
