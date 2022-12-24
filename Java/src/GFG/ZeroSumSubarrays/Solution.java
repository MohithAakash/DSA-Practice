package GFG.ZeroSumSubarrays;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    public static long findSubarray(long[] arr ,int n)
    {
        long preSum = 0, ans = 0;
        Map<Long, Integer> freq = new HashMap<>();
        for (long num : arr) {
            preSum += num;
            if(preSum == 0)
                ans++;
            freq.put(preSum, freq.getOrDefault(preSum, 0) + 1);
        }
        for (int v : freq.values()) {
            ans += ((v * (v-1)) / 2);
        }
        return ans;
    }
}
