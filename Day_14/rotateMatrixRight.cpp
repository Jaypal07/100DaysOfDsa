#include <bits/stdc++.h> 
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {
	// Write your code here.

	vector<int> ans(n*m);
	int idx = 0;
	k = k % m;

	for(int i=0; i<n; i++){
		for(int j=m-k; j<m; j++){
			ans[idx++] = mat[i][j];
		}

        for (int j = 0; j < m - k; j++) {
            ans[idx++] = mat[i][j];
        }
    }

	return ans;
}