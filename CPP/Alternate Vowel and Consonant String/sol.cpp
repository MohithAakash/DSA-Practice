#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rearrange(string S, int N) {
        if (N == 1) return "-1";
        vector<int> v(26), c(26);
        int vCount = 0, cCount = 0;
        for (auto ch : S) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vCount++;
                v[ch - 'a']++;
            } else {
                cCount++;
                c[ch - 'a']++;
            }
        }
        if (abs(vCount - cCount) >= 2) return "-1";
        string ans = "";
        int i = 0, j = 1;
        char ch;
        while (v[i] == 0) i += 2;
        while (c[j] == 0) j++;
        if (cCount > vCount || (cCount == vCount && i > j)) {
            ch = 'a' + j;
            ans += ch;
            c[j]--;
        }
        while (ans.length() < N) {
            while (i < 26 && v[i] == 0) i += 2;
            while (j < 26 && c[j] == 0) j++;
            if (i < 26) {
                ch = 'a' + i;
                ans += ch;
                v[i]--;
            }
            if (j < 26) {
                ch = 'a' + j;
                ans += ch;
                c[j]--;
            }
        }

        return ans;
    }
};