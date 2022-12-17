#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    // 1st approach DP
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int n = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int prevMin = INT_MAX;
                if(j > 0) {
                    if(i - 1 > 0) 
                        prevMin = min(prevMin, matrix[i-1][j-1]);
                    if(i + 1 < n) 
                        prevMin = min(prevMin, matrix[i+1][j-1]);
                    prevMin = min(prevMin, matrix[i][j-1]);
                    matrix[i][j] += prevMin;
                }
                
                if(j == n - 1) 
                    ans = min(ans, matrix[i][j]);
            }
        }

        return ans;
    }

    // int rec(vector<vector<int>>& matrix, int i, int j) { 
    //     if(j < 0 || j >= matrix.size() || i >= matrix.size()) 
    //         return INT_MAX;
    //     if(i == matrix.size() - 1)
    //         return matrix[i][j];
    //     return (matrix[i][j] + min(rec(matrix, i+1, j), min(rec(matrix, i+1, j-1), rec(matrix, i, j+1))));
    // }
    

    // int minFallingPathSum(vector<vector<int>>& matrix) { 
    //     int n = matrix.size();
    //     int ans = INT_MAX;
    //     for(int i = 0; i < n; i++) {
    //         ans = min(ans, rec(matrix, 0, i));
    //     }
    //     return ans;
    // }

};