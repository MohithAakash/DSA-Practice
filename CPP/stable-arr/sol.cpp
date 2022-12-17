// https://practice.geeksforgeeks.org/contest/interview-series-59/problems/#
#include <bits/stdc++.h> 
using namespace std;

class Solution{
  public:
  int stableArray(vector<int>& a){
    map<int, int> freq;
    for (auto x : a) freq[x]++;

    map<int, int> X;
    int max=0;
    for (auto x : freq){
        X[x.second] += x.second;
        if(X[x.second] > max) max=X[x.second];
    }
    return a.size()-max;
    
  }
};

