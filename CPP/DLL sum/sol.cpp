#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}

// Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        Node *p=head;
        vector<pair<int, int>> ans;
        unordered_map<int,bool> m;
        while(p){
            m[p->data]=true;
            p=p->next;
        }
        p=head;
        while(p){
            if(m[target-(p->data)]){
                ans.push_back(make_pair(p->data, target-(p->data)));
                m[p->data]=false;
                m[target-(p->data)]=false;
                p=p->next;
            }
        }
        return ans;

        
    }
};