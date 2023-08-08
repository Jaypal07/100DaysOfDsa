#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long maxi = LLONG_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxi = max(maxi, sum);
        if(sum<0) sum=0;
    }

    if(maxi<0) maxi =0;

    return maxi;
}