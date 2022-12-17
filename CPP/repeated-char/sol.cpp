// https://practice.geeksforgeeks.org/problems/repeated-character2058/1

#include <bits/stdc++.h> 
using namespace std;

class Solution
{
  public:
    char firstRep (string s)
    {
        unordered_map<char,int> mp;

        for(char c:s) 
            mp[c]+=1;
        for(char c:s)
            if(mp[c]>1) return c;

        char r='-1';
        return r;
    }
};

int main(){
    Solution ob;
    cout << ob.firstRep("abba");
    return 0;
}
