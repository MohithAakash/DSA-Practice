#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    int minVal(int a, int b) {
        int setA=0,setB=0,x=a;
        while(a){
            setA++;
            a&=(a-1);
        }
        while(b){
            setB++;
            b&=(b-1);
        }
            for(int i=0; i<(sizeof(a)*8) && setA>setB; i++){
                if(x&(1<<i)){
                    x=x^(1<<i);
                    setA--;
                }
            }
            for(int i=0; i<(sizeof(a)*8) && setA<setB; i++){
                if(!(x&(1<<i))){
                    x=x^(1<<i);
                    setA++;
                }
            }
        return x;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}
