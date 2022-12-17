#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int leftSum = 0, rightSum = 0;
        for(auto x: nums) rightSum += x;
        int n = nums.size();
        int ans = 0, minAvg = INT_MAX;
        for(int i = 0; i < n; i++) {
            leftSum += nums[i];
            rightSum -= nums[i];
            int avg = (leftSum/(i+1));
            if(i!=n-1) avg = abs(avg - (rightSum/(n-i-1)));
            if(avg < minAvg) {
                minAvg = avg;
                ans = i;
            }
        }

        return ans;
    }
}; 