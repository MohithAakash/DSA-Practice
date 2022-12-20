package KeysAndRooms841;


import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        int n = rooms.size();
        Queue<Integer> queue = new LinkedList<>();
        queue.add(0);
        boolean[] visited = new boolean[n];
        visited[0] = true;

        while (!queue.isEmpty()) {
            int currRoom = queue.poll();
            for(int key : rooms.get(currRoom)) {
                if(!visited[key]) {
                    queue.add(key);
                    visited[key] = true;
                }
            }
        }
        for (boolean visit : visited) {
            if(!visit) {
                return false;
            }
        }
        return true;
    }
}