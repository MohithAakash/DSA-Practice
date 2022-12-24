package Leetcode.PossibleBipartition886;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Solution {
    public boolean possibleBipartition(int n, int[][] dislikes) {
        Map<Integer, List<Integer>> graph = new HashMap<>();
        for (int[] edge : dislikes) {
            int a = edge[0], b = edge[1];
            graph.computeIfAbsent(a, value -> new ArrayList<Integer>()).add(b);
//            graph.computeIfAbsent(b, value -> new ArrayList<Integer>()).add(a);
        }
        boolean[] visited = new boolean[n];
        return dfs(1, graph, visited);
    }
    public static boolean dfs(int node, Map<Integer, List<Integer>> graph, boolean[] visited) {
        if(visited[node-1]) return false;
        visited[node-1] = true;
        for(int i : graph.getOrDefault(node, new ArrayList<>())) {
            if(!dfs(i, graph, visited))
                return false;
        }
        return true;
    }
}
