package Leetcode.SumofDistancesinTree834;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    static List<List<Integer>> tree;
    static int[] ans;
    static int[] children;
    static int N;
    public int[] sumOfDistancesInTree(int n, int[][] edges) {
        tree = new ArrayList<List<Integer>>();
        ans = new int[n];
        children = new int[n];
        N = n;
        for (int i = 0; i < n; i++) {
            tree.add(new ArrayList<>());
        }
        for (int i = 0; i < n - 1; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            tree.get(u).add(v);
            tree.get(v).add(u);
        }

        calc1(0, -1);
        for (int c: tree.get(0))
            calc2(c, 0);
        return ans;
    }
    public static void calc1(int node, int parent){
        for (int c: tree.get(node)) {
            if(c == parent) continue;
            calc1(c, node);
            children[node] += 1 + children[c];
            ans[node] += 1 + ans[c] + children[c];
        }
    }
    public static void calc2(int node, int parent){
        ans[node] += (ans[parent] - (ans[node] + children[node])) + N - children[node] - 2;
        for (int c : tree.get(node)) {
            if(c == parent) continue;
            calc2(c, node);
        }
    }
}
