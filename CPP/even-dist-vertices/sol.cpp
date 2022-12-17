// https://practice.geeksforgeeks.org/contest/challenge-7-graph/problems/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count = -1;
    int findNumberOfVertices(int X, int V, vector<vector<int>> adj)
    {
        bfs(X, V, adj);
        return count;
    }
    void bfs(int s, int v, vector<vector<int>> adj)
    {

        vector<bool> visited;
        visited.resize(v, false);
        queue<pair<int, int>> q;
        pair<int, int> p = {s, 0};
        visited[p.first] = true;
        q.push(p);

        while (!q.empty())
        {
            p = q.front();
            s = p.first;
            q.pop();
            
            if (p.second % 2 == 0) count += 1;

            for (auto a : adj[s])
            {
                if (!visited[a])
                {
                    visited[a] = true;
                    q.push({a, p.second + 1});
                }
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> V;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int X;
        cin >> X;
        Solution obj;
        int res = obj.findNumberOfVertices(X, V, adj);
        cout << res << "\n";
    }
    return 0;
}