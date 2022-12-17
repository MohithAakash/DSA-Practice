#include <bits/stdc++.h> 
using namespace std;

int main(){
        int query =76;
        int n=query;
        vector<int> b;
        while(n){
            b.push_back(n&1);
            n=n>>1;
        }
        if(b.size()<3) cout << query;
        for(int i=b.size()-1; i>1; i--){
            
            if(b[i] && b[i-1] && b[i-2]){
                b[i-2]=0;
                i-=2;
            }
        }
        for(int i=0; i<b.size();i++){
            if(b[i]) n+=pow(2,i);
        }
        cout << n;

    return 0;
}
