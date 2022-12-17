#include <bits/stdc++.h> 
using namespace std;

class RandomizedSet {
public:
    unordered_map<int, int> mp;
    vector<int> nums;
    RandomizedSet() {}
    
    bool insert(int val) {
        if(mp[val]!=-1) return false;
        nums.push_back(val);
        mp[val]=nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp[val]==-1) return false;
        int n = nums.size();
        mp[n-1] = mp[val];
        swap(nums[mp[val]], nums[n-1]);
        mp[val]=-1;
        nums.pop_back();
        return true;
    }
    
    int getRandom() {
        // return 0;
        srand (time(NULL));
        int random_index = rand() % nums.size();
        return nums[random_index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */