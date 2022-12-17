#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int> m;
        for(int x: nums) m[x]++;
        
        vector<pair<int,int>> freq;
        for(auto i: m) freq.push_back(make_pair(i.second,i.first));
        sort(freq.begin(), freq.end(), greater<int>());
        vector<int> ans;
        for(int i=0; i<k; i++){ans.push_back(freq[i].second);cout << freq[i].second;}
        return ans;

        
    }
};

int main(){
    Solution ob;
    vector<int> nums{1,1,2,2,3,3,3,4};
    ob.topK(nums, 2);
    return 0;
}


