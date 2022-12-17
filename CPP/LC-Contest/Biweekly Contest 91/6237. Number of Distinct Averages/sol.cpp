#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), ans=0;
        unordered_map<int, int> m;
        for(int i=0; i<n/2; i++){
            m[nums[i]+nums[n-i-1]]++;
            if(m[nums[i]+nums[n-i-1]]==1) ans++;
        }
        return ans;
    }
};
