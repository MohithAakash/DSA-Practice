// 27/09/22 - https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

#include <bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i=0; i<n; i++) pq.push(arr[i]);
        long long sum=0;
        while(pq.size()!=1){
            long long x= pq.top();
            pq.pop();
            sum+=pq.top()+x;
            pq.push(pq.top()+x);
            pq.pop();
        }

        return sum;

    }
};

