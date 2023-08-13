#include <bits/stdc++.h> 
vector<vector<int>> sumOfKxKMatrices(vector<vector<int>> &arr, int k){
    // Write your code here.
    int n=arr.size(),reqSize=n-k+1;
    vector<vector<int>>ans(reqSize,vector<int>(reqSize));
    vector<vector<int>>dp(n,vector<int>(n));

    for(int i=0;i<n;i++) {
        int tmp=0;
        for(int j=0;j<n;j++) {
            tmp+=arr[i][j];
            dp[i][j]=tmp+(i>0?dp[i-1][j]:0);
        }
    }

    for(int i=0;i<reqSize;i++) {
        for(int j=0;j<reqSize;j++) {
            int ai=i+k-1,aj=j+k-1;
            int rm=(ai-k>=0?dp[ai-k][aj]:0);
            int cm=(aj-k>=0?dp[ai][aj-k]:0);
            int rcm = (ai-k>=0 && aj-k>=0)?dp[ai-k][aj-k]:0;
            int tmp=dp[ai][aj]-rm-cm+rcm;
            ans[i][j]=tmp;
        }
    }
    
    return ans;
}
