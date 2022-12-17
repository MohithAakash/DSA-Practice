// 21/10/22 - https://practice.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1

#include <bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&a)  {
        vector<int> ans;
        int i=0, j=0, cnt=0, flag=1, lim=c;
        int dir=1;
        for (int cnt = r*c; cnt>0; cnt--)
        {   
            switch (dir){
                case 0:
                    ans.push_back(a[i--][j]);
                    break;
                case 1:
                    ans.push_back(a[i][j++]);
                    break;
                case 2:
                    ans.push_back(a[i++][j]);
                    break;
                case 3:
                    ans.push_back(a[i][j--]);
                    break;
                default:
                    break;
            }

            lim--;
            if(!lim){
                if (flag) {
                    lim=--r;
                    flag=0;
                    if(dir==3) j++, i--;
                    else j--, i++;
                }
                else {
                    lim=--c;
                    flag=1;
                    if(dir==0) i++, j++;
                    else i--, j--;
                }

                dir=(dir+1)%4;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;        
    }
};

int main(){
    Solution ob; 
    vector<vector<int>> a 
      {{1, 2, 3, 4},
       {5, 6, 7, 8},
       {9, 10, 11, 12}, 
       {13, 14, 15, 16}};
    ob.reverseSpiral(4,4,a);

    return 0;
}
