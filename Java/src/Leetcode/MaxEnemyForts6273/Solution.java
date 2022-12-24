package Leetcode.MaxEnemyForts6273;

class Solution {
    public int captureForts(int[] forts) {
        int ans = 0;
        int curr = Integer.MIN_VALUE;
        boolean one = false;
        for (int i = 0; i < forts.length; i++) {
            if(forts[i] == 1) {
                curr = i;
                one = true;
            } else if (forts[i] == -1) {
                if(one) {
                    ans = Math.max(ans, i-curr-1);
                }
                one = false;
            }
        }
        curr = Integer.MIN_VALUE;
        one = false;
        for (int i = forts.length-1; i >= 0; i--) {
            if(forts[i] == 1) {
                curr = i;
                one = true;
            } else if (forts[i] == -1) {
                if(one) {
                    ans = Math.max(ans, curr-i-1);
                }
                one = false;
            }
        }
        return ans;

    }
}
