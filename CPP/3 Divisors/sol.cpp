#include <bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q) {
        vector<int> ans; 
        long long maxQ = *max_element(query.begin(), query.end());
        vector<bool> sieve(maxQ, true);
        for(int i = 2; i*i <= maxQ; i++) {
            if(sieve[i]) {
                for(int j = i*i; j <= maxQ; j += i) {
                    sieve[j] = false;
                }
            }
        }
        for (auto n : query) {
            int cnt = 0;
            for(int i = 2; i*i <= n; i++) {
                if(sieve[i]) cnt++;
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};