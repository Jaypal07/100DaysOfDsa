#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
    int m = matrix[0].size();
 

    vector<bool> zeroRows(n, false);
    vector<bool> zeroCols(m, false); 

    // Mark the rows and columns that contain zeros

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (matrix[i][j] == 0) {

                zeroRows[i] = true;

                zeroCols[j] = true;

            }

        }

    }

    // Set the marked rows to zeros

    for (int i = 0; i < n; i++) {

        if (zeroRows[i]) {

            for (int j = 0; j < m; j++) {

                matrix[i][j] = 0;

            }

        }

    }


    // Set the marked columns to zeros

    for (int j = 0; j < m; j++) {

        if (zeroCols[j]) {

            for (int i = 0; i < n; i++) {

                matrix[i][j] = 0;

            }

        }

    }
}