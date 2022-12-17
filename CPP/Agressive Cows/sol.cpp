// https://practice.geeksforgeeks.org/problems/aggressive-cows/1

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls[n-1]-stalls[0];
        int ans = -1;
        while(high >= low) {
            int mid = low + (high - low)/2;
            int cowsPlaced = 1, prev = stalls[0];
            // cout << mid << " ";
            for(int i=1; i<n; i++) {
                // cout << prev - stalls[i] << " ";
                if((stalls[i] - prev) >= mid) {
                    cowsPlaced++;
                    prev = stalls[i];
                }
            }
            // cout << endl;
            if(cowsPlaced >= k){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }

        return ans;
        
    }
};