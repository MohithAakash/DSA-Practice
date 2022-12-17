#include <bits/stdc++.h> 
using namespace std;

class Solution{
public:
    vector<string> pattern(int n){
        vector<string> ans;
        for(int i=0; i<n; i++) ans.push_back("");
        int x=1;
        for(int i=n; i>0; i--){
            for(int s=1; s<=(n-i)*2; s++) ans[n-i]+='-';
            for(int j=1; j<=i; j++) 
                ans[n-i]=ans[n-i]+to_string(x++)+"*";
            for (int j=0; j<i; j++){
                ans[n-i]+=to_string(x+((i*i)-(i-1))+j);
                if(j!=i-1) ans[n-i]+="*";
            }
        }
        return ans;
    }
};

int main(){
    Solution ob;
    ob.pattern(3);
    return 0;
}
