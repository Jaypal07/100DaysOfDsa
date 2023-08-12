#include <bits/stdc++.h> 
long long maxi(vector<int> &arr) {
    long long sum = 0;
    long long maxi = INT_MIN;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i]; 
        maxi = max(sum, maxi);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

long long maxSubSumKConcat(vector<int> &arr, int n, int k) {

    vector<int> ans = arr;
    for (int i = 0; i < n; i++) {
        ans.push_back(arr[i]);
    }

    int arrsum = 0;
    long long maxsubsum;
    if (k == 1)
        return maxi(arr);

    for (int i = 0; i < n; i++) {
        arrsum = arrsum + arr[i];
    }
 
    if (arrsum <= 0)
        return maxi(ans);
    else {
        maxsubsum = maxi(ans);
        maxsubsum = maxsubsum + (long long)(k - 2) * (long long)arrsum;
    }

    return maxsubsum;

}