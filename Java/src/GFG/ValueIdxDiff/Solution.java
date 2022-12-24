package GFG.ValueIdxDiff;

class Solution{
    // Function for finding maximum and value pair
    public static int maxDistance (int arr[], int n) {
        int ans = Integer.MIN_VALUE;
        int minExp = Integer.MAX_VALUE;
        int maxExp = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            minExp = Math.min(minExp, arr[i] + i);
            maxExp = Math.max(maxExp, arr[i] - i);
            ans = Math.max(ans, Math.max(arr[i] + i - minExp, maxExp + i - arr[i]));
        }
        return ans;
    }


}
