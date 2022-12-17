#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<string> splitMessage(string message, int limit) {
        vector<string> ans;
        int len=message.size(), suff=5, d=9, tot=0;
        int tempD=d, pre=limit-suff;
        
        while(true){
            if(pre<1) return ans;
            tempD=d;
            tot=0; 
            while(d){
                tot+=d*pre;
                pre++;
                d/=10;
            }  
            
            
            if(tot>=len) break;
            suff+=2;
            pre=limit-suff;
            d=tempD*10;
        }
        pre=limit-suff;
        cout << (tot-(tempD*pre));
        int remChars= len-(tot-(tempD*pre));
        int totParts=(remChars/pre)+(tempD/10);
        if(remChars%pre) totParts++;
        pre=limit-(tempD/9)+4;

        int i, partCnt=1;
        for(i=0; i<len; i+=pre, partCnt++){
            string part = message.substr(i,pre) + "<" + to_string(partCnt) + "/" + to_string(totParts) + ">";
            ans.push_back(part);
            if(partCnt%10==0) pre--;
        }


        return ans;
    }
};