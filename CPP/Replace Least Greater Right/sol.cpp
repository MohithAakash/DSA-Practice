#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        // 1st submission TLE :(
        // multiset<int> ms(arr.begin(), arr.end());
        // vector<int> ans;
        // for(int i=0; i<n; i++){
        //     auto it = ms.find(arr[i]);
        //     while(it!=ms.end() && *it<=arr[i]) it++;
        //     if(it!=ms.end()) ans.push_back(*it);
        //     else ans.push_back(-1);
        //     ms.erase(ms.find(arr[i]));
        // }
        // return ans;

        vector<int> ans;
        set<int> s;
        for(int i=n-1; i>=0; i--){
            s.insert(arr[i]);
            auto it = s.upper_bound(arr[i]);
            if(it!=s.end()) ans.push_back(*it);
            else ans.push_back(-1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

