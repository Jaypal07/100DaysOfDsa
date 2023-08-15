#include <bits/stdc++.h> 
int findKthElement(vector<vector<int>> matrix, int k) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int j = 0;

        int rowStart = 0;
        int rowEnd = m-1;
        int colStart = 0;
        int colEnd = n-1;

        while(j < k){
            for(int i=colStart;j<k && i<=colEnd;i++){
                ans.push_back(matrix[rowStart][i]);
                j++;
            }
            rowStart++;
           
            for(int i=rowStart;j<k && i<=rowEnd;i++){
                ans.push_back(matrix[i][colEnd]);
                j++;
            }
            colEnd--;
           
            for(int i=colEnd;j<k && i>=colStart;i--){
                ans.push_back(matrix[rowEnd][i]);
                j++;
            }
            rowEnd--;
           
            for(int i=rowEnd;j<k && i>=rowStart;i--){
                ans.push_back(matrix[i][colStart]);
                j++;
            }
            colStart++;

        }
        return ans[j-1];
}