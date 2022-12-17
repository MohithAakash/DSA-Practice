#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // if(n%2==1) arr[n]=0;
        sort(arr, arr+n, greater<int>());
        // for(int i=0; i<n; i++){
        
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        
        long long int ans = 0;
        int add, carry=0;

        for(int i=0; i<n; i+=2){
            add = (arr[i]+arr[i+1]+carry)%10;
            ans += add * pow(10, i/2);
            carry = (arr[i]+arr[i+1]+carry)/10;
        }

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << obj.minSum(arr,n);

    return 0;
}
