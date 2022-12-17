#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'queensAttack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER r_q
 *  4. INTEGER c_q
 *  5. 2D_INTEGER_ARRAY obstacles
 */

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    vector<pair<int,int>> l;
    l.push_back(make_pair(0, n+1));
    l.push_back(make_pair(0, n+1));
    int lu = (max(r_q,c_q)-min(r_q,c_q));
    l.push_back(make_pair(lu, (n-lu)+1));
    
    for(auto v: obstacles){
        if(v[0]==r_q){
            if(v[1]>c_q) l[0].second=min(l[0].second, v[1]);
            else l[0].first=max(l[0].first, v[1]);
        }
        else if(v[1]==c_q){
            if(v[0]>r_q) l[1].second=min(l[1].second, v[0]);
            else l[1].first=max(l[1].first, v[0]);
        }        
    }
    
    
    int attack=0;
    for(auto p: l) {
        attack=attack+(p.second-p.first)-2;}
    
    return attack;
        
}    
int main()
{
    int n, k;
    cin >> n >> k;
    int rq, cq;
    cin >> rq >> cq;
    vector<vector<int>> o;
    for (int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
        o.push_back({r,c});
    }
    queensAttack(n,k,rq,cq,o);
    
}

