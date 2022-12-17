#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string BalancedString(int N) {
        string ans = "";
        int sumOfDigits = 0, temp = N;
        while (temp) {
            sumOfDigits += (temp % 10);
            temp /= 10;
        }
        while (N > 26) {
            ans += "abcdefghijklmnopqrstuvwxyz";
            N -= 26;
        }
        int beg = N / 2, end = N / 2;
        if (N % 2) {
            end += 1;
            if (sumOfDigits % 2 == 0) {
                swap(beg, end);
            }
        }
        for (int i = 0; i < beg; i++) {
            ans += ('a' + i);
        }
        for (int i = 26 - end; i < 26; i++) {
            ans += ('a' + i);
        }

        return ans;
    }
};