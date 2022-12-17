#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        int hashCount = 0;
        int i=0, j=0;
        S += '$';
        T += '$';

        while(i<M && j<N){
            while(i<M && S[i]=='#'){
                hashCount--;
                i++;
            } 
            while(j<N && T[j]=='#'){ 
                hashCount++;
                j++;
            }
            if((T[i]!=S[j]) || (T[j]=='A' && j>i) || (T[j]=='B' && j<i)) return false;
            i++;
            j++;
        }
        // while(i<M) if(S[i++] == '#') hashCount--;
        // while(j<N) if(T[j++] == '#') hashCount++;

        return hashCount == 0;
    }
};
