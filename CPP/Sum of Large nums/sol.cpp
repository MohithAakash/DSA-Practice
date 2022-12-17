#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
string findSum(string X, string Y) {
        string ans="";
        int i=X.length()-1;
        int j=Y.length()-1;
        int carry=0,sum=0;

        while(i>=0 && j>=0){
            sum=X[i]-'0'+Y[j]-'0'+carry;
            ans= to_string( sum%10 )+ans;
            carry=(int)(sum/10);
            i--, j--;
        }
        while(i>=0){
            sum=X[i]-'0'+carry;
            ans= to_string( sum%10 )+ans;
            carry=(int)(sum/10);
            i--;
        }
        while(j>=0){
            sum=Y[j]-'0'+carry;
            ans= to_string( sum%10 )+ans;
            carry=(int)(sum/10);
            j--;
        }
        ans= to_string(carry) + ans;

        i=0;
        while(i<ans.length() && ans[i]=='0') i++;
        if (i==ans.length()) ans="0";
        else ans=ans.substr(i);

        return ans;

    }    
};

