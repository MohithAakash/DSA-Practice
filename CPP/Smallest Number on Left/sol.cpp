
#include <bits/stdc++.h> 
using namespace std;

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int> s;
        s.push(-1);
        s.push(a[0]);
        vector<int> ans;
        ans.push_back(-1);
        for(int i=1; i<n; i++){
            while(!s.empty() && s.top()>=a[i]){
                s.pop();
            }
            ans.push_back(s.top());
            s.push(a[i]);
        }
        return ans;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}
/*
Example 1:

Input: n = 3
a = {1, 6, 2}
Output: -1 1 1
Explaination: There is no number at the 
left of 1. Smaller number than 6 and 2 is 1.
Example 2:

Input: n = 6
a = {1, 5, 0, 3, 4, 5}
Output: -1 1 -1 0 3 4
Explaination: Upto 3 it is easy to see 
the smaller numbers. But for 4 the smaller 
numbers are 1, 0 and 3. But among them 3 
is closest. Similary for 5 it is 4.
*/