#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lMin = INT_MAX;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++){
            lMin = min(lMin, prices[i]);
            profit = max(profit, prices[i]-lMin);
        }
        return profit;
    }
};