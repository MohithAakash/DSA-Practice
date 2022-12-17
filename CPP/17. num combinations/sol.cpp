#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<vector<string>> nums {
        {"a", "b", "c"},
        {"d", "e", "f"},
        {"g", "h", "i"},
        {"j", "k", "l"},
        {"m","n", "o"},
        {"p", "q", "r", "s"},
        {"t", "u", "v"},
        {"w", "x", "y", "z"}
    };
    string d;
    vector<string> letterCombinations(string digits) {
        d=digits;
        return letterCombinationsRec(0);
    }
    vector<string> letterCombinationsRec(int i) {
        vector<string> ans;
        if(i>=d.length()) {
            ans.push_back("");
            return ans;
        }

        int numsIdx = ((int)(d[i]-'0'))-2;
        for(int j=0; j<nums[numsIdx].size(); j++){
            for(string s:letterCombinationsRec(i+1)){
                ans.push_back(nums[numsIdx][j]+s);
            }
        }
        return ans;
    }
};


int main(){
    Solution ob;
    string s="234";
    vector<string> vs= ob.letterCombinations(s);
    for(string st:vs)
        cout << st << endl;

    return 0;
}

