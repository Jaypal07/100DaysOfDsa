#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0; i<n; i++){
       bool didSwap = true;
       for(int j=0; j<n-i-1; j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j], arr[j+1]);
               didSwap=false;
           }
       }
       if(didSwap){
           break;
       } 
    }
}
