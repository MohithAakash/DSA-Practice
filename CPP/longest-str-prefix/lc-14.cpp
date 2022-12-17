// https://leetcode.com/problems/longest-common-prefix/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // if(strs[0][0] == strs[1][0])
        // cout << "True";
        int minlen=200;
        string ans="";

        for (auto &&s : strs)
            minlen = min(minlen, int(s.size()));

        for(int i=0; i<minlen; i++){
            for(int j=1; j<strs.size(); j++){
                if(strs[0][i] != strs[j][i]) return ans;
            }
            ans+=strs[0][i];
        }
        return ans;
    }   
};

int main(int argc, char const *argv[])
{
    Solution ob;
    vector<string> strs={{"flower","flow","flight"}};
    cout << ob.longestCommonPrefix(strs);
    return 0;
}

 