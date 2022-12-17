#include <bits/stdc++.h> 
using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int mx = 2001;
        for(auto m: matrix){
            for(auto e: m) e += 1000;
        }

        for (int i=0; i<n; i++) {
            int k = n-i-1;
            for (int j=0; j<n; j++) {
                matrix[j][k] += ((matrix[i][j] % mx) * mx);
            }
        }
        for(auto m: matrix){
            for(auto e: m){ 
                e /= mx;
                e -= 1000;
            }
        }
    }
};