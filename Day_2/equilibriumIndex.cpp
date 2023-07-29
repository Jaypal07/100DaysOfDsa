#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int n= arr.size();
    if(n==1) return arr[0];
    if(n==2) return -1;
    
    int totalSum=0;
    int rightSum=0;
    int leftSum=0;
    
    for(int i=0; i<n; i++)
        totalSum+=arr[i];
    
    for(int i=0; i<n; i++){
        rightSum=totalSum-leftSum-arr[i];
        if(rightSum==leftSum) return i;
        leftSum+=arr[i];
    }
    return -1;
}