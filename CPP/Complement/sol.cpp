#include <bits/stdc++.h> 
using namespace std;

class Solution{
public:
    vector<int> findRange(string str, int n) {
        int maxc = 0, currc = 0;
        vector<int> ans {-1};
        int left = 0, right = 0;
        for(int i = 0; i < n; i++) {
            int val = str[i] == '0' ? 1 : -1;
            if(val + currc < val) {
                currc = val;
                left = i + 1;
            }
            else {
                currc += val;
            }
            right = i + 1;
            if(currc > maxc) {
                maxc = currc;
                if(ans[0] == -1) {
                    ans[0] = left;
                    ans.push_back(right);
                }
                else {
                    ans[0] = left;
                    ans[1] = right;
                }
            }

        }

        return ans;
    }
};