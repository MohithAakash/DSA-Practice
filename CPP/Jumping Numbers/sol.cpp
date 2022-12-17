// https://practice.geeksforgeeks.org/problems/jumping-numbers3805/1

#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    long long jumpingNums(long long X) {
        queue<long long> q;
        for(int i=1; i<9; i++) q.push(i);
        long long temp=0;
        while (q.front()<=X)  
        {
            temp = q.front();
            q.pop();
            if(temp%10 != 0)
                q.push(((temp%10)-1)+(temp*10));
            if(temp%10 != 9)
                q.push(((temp%10)+1)+(temp*10));

        }
        return temp;        
    }
};
