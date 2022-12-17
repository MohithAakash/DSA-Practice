// https://practice.geeksforgeeks.org/problems/get-min-at-pop/1

#include <bits/stdc++.h> 
using namespace std;

int mn;
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   stack<int> st;
   if(!arr) return st;
   mn = arr[0];
   st.push(mn);
   for(int i=1; i<n; i++){
    if (arr[i]<mn)
    {
        st.push((2*arr[i])-mn);
        mn = arr[i];
    }
    else st.push(arr[i]);
    
   }
   return st;
   
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // cout << mn << " ";
    while (!s.empty())
    {
        cout << mn << " ";
        if (s.top() < mn)
        {
            mn = (2*mn)-s.top();
        }
        s.pop();
    }
    cout << endl;    
}

