#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int recMaxUncrossedLines(vector<int>& nums1, vector<int>& nums2, int currIdx, int prev, vector<vector<int>> &dp) {
        if(currIdx >= nums1.size())
            return 0;
        if(dp[currIdx][prev + 1] != -1)
            return dp[currIdx][prev + 1];
        
        for (int i = prev + 1; i < nums2.size(); i++) {
            if(nums1[currIdx] == nums2[i]) {
                dp[currIdx][prev + 1] = max(recMaxUncrossedLines(nums1, nums2, currIdx+1, i, dp) + 1, recMaxUncrossedLines(nums1, nums2, currIdx+1, prev, dp) );
                return dp[currIdx][prev + 1];
            }
        }
        dp[currIdx][prev + 1] = recMaxUncrossedLines(nums1, nums2, currIdx+1, prev, dp);
        return dp[currIdx][prev + 1];
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size() + 1, -1));
        return recMaxUncrossedLines(nums1, nums2, 0, -1, dp);
    }
};