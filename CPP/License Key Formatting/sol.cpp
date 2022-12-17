// https://practice.geeksforgeeks.org/problems/license-key-formatting/1

#include <bits/stdc++.h> 
using namespace std;

class Solution
{
   public:
    string ReFormatString(string S, int K){
        string curr = "";
    	for(auto c: S){
            if(c!='-'){
                if(isalpha(c)) curr+=toupper(c);
                else curr+=c;
            }
        }
        string res="";
        for(int i=curr.length()-K; i>=0; i-=K){
            res=curr.substr(i,K)+res;
            if(i!=0) res = '-'+res;
        }
        if(curr.length()%K) res=curr.substr(0,curr.length()%K) + res;
        return res;
        
    	
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}
