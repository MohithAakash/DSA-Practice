// 

#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    vector<int> farNumber(int N, vector<int> &A) {
        int x;
        for(int i=0; i<N-1; i++){
            x=A[i];
            A[i]=-1;
            for(int j=N-1; j>i; j--){
                if(A[j]<x) A[i]=j;
            }
        }
        A[N-1]=-1;
    }
};


int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}

