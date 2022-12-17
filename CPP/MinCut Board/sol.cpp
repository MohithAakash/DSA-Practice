// https://practice.geeksforgeeks.org/problems/minimum-cost-to-cut-a-board-into-squares/1

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        int horPieces=1, verPieces=1, cost=0;
        sort(X.begin(), X.end(), greater<int>());
        sort(Y.begin(), Y.end(), greater<int>());
        int i=0, j=0;
        while(i<X.size() && j<Y.size() ){
            if(X[i]>=Y[j]){
                cost = cost + (horPieces*X[i]);
                verPieces++;
                i++;
            }
            else{
                cost = cost + (verPieces*Y[j]); 
                horPieces++;                                
                j++;
            }
        }
        while(i<X.size()){
            cost = cost + (horPieces*X[i]);
            verPieces++;
            i++;
        }
        while(j<Y.size()){
            cost = cost + (verPieces*Y[j]); 
            horPieces++;                                
            j++;
        }
        return cost;
    }
};


int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}
