#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = 0, j = 0;
        unordered_set<char> chars;
        while (j < s.length()) {
            if (chars.find(s[j]) == chars.end()) {
                chars.insert(s[j]);
                ans = max(ans, (j - i) + 1);
            } 
            else {
                while (!chars.empty() && chars.find(s[j]) != chars.end()) {
                    chars.erase(chars.find(s[i]));
                    i++;
                }
                chars.insert(s[j]);
            }
            j++;
        }
        return ans;
    }
};