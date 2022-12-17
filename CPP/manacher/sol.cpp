#include <bits/stdc++.h> 
using namespace std;

void longestPalin(string);

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    longestPalin(str);
    return 0;
}

void longestPalin(string str)
{
    string s="$";
    for(char c: str){
        s+="#";
        s+=c;
    }
    s+="#*";
    int lps[s.size()]={0};
    int c=2,r=2;
    int mir;
    for(int i=2; i<s.size()-1; i++){
        if(i<r){
            mir=(2*c)-i;
            lps[i]=min(r-i, lps[mir]);
        }
        while(s[i+1+lps[i]] == s[i-1-lps[i]])
            lps[i]++;
        if(i+lps[i] > r){
            c=i;
            r=i+lps[i];
        }
    }
    int mx=0;
    int ci=0;
    for(int i=2; i<s.size()-1; i++ ){
        if(lps[i]>mx){
            mx=lps[i];
            ci=i;
        }
    }
    cout << mx << endl;
    cout << str.substr((int)((ci-1-mx)/2), mx) << endl;
}
