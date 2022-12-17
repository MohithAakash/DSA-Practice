#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto x: arr) mp[x]++;
        unordered_set<int> s;
        for(auto i: mp) {
            if(s.find(i.second) != s.end()) return false;
            s.insert(i.second);
        }
        return true;
    }
};