// https://practice.geeksforgeeks.org/contest/interview-series-59/problems/#

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumSum(string s)
    {
        int l = s.length();
        vector<char> v;

        for (int i = 0; i < l / 2; i++){
            if (s[i]!='?') v.push_back(s[i]);
            else if(s[l-i-1]!='?') v.push_back(s[l-i-1]);
            else if (s[i] != s[l-i-1]) return -1;
        }
        if(v.empty() || v.size()==1) return 0;

        int ans=0;
        for (int i = 0; i < v.size()-2; i++)
        {
            ans = abs(v[i]-v[i+1]);
        }
        return ans*2;
        
    }
};


 