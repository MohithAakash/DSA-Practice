// 05/12/22 - https://practice.geeksforgeeks.org/problems/shortest-path-by-removing-k-walls/1

#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    bool isPossible(vector<int> cell, vector<vector<int>> mat) {

    }
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        vector<vector<vector<bool>>> visited(m, vector<vector<bool>> (n, vector<bool>(k, false)));
        int ans = -1;
        queue<vector<int>> q;
        q.push({0, 0, 0, k});
        visited[0][0][0] = true;
        while (!q.empty())
        {
            vector<int> cell = q.front();
            if(cell[0] == m-1 && cell[1] == n-1) ans = min(ans, cell[2]);
            q.pop();
            // To be continued ...

        }
        

    }
};