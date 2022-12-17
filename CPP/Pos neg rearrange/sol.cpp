// https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[]={-36, -9, -92, -87, -43, -44};
    int n=6;
	    vector<int> pos;
	    vector<int> neg;
        for(int i=0; i<n; i++){
            if(arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        cout << neg.size();
        int i=0,j=0,k=0;
        while(i<pos.size() && j<neg.size()){
            arr[k++]=pos[i++];
            arr[k++]=neg[j++];
        }
        while(i<pos.size()){
            arr[k++]=pos[i++];
        }
        // cout << k << j << endl;
        while(j<neg.size()){
            arr[k++]=neg[j++];
        }
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        
    return 0;
}

class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
        for(int i=0; i<n; i++){
            if(arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        for(int i=0; i<n; i++){
            if(i%2==0) arr[i]=pos[i/2];
            else arr[i]=neg[(int)i/2];
        }
        
        
    }
};