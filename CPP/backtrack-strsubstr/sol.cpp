#include <bits/stdc++.h> 
using namespace std;
string s="abc";
int n=3;
void substrings(string sub, int l){
    for(int i=l; i<n; i++){
        substrings(sub+s[i], i+1);
        cout << sub + s[i] << endl;
    }
    
}

int main(){
    substrings("", 0);
    return 0;
}
