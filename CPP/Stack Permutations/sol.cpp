#include <bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        int i=0,j=0;
        stack<int> s;
        while(i<n){
            s.push(a[i]);
            while(!s.empty() && s.top()==b[j]){
                s.pop();
                j++;
            }
            i++;
        }
        if(j==n) return 1;
        else return 0;

    }
};
