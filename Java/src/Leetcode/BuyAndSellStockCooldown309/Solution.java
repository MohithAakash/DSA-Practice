package Leetcode.BuyAndSellStockCooldown309;

import java.util.Arrays;

public class Solution {
    static int[][] dp;
//    public static int rec(int[] prices, int i, int flag, int prev) {
//        if(i >= prices.length)
//            return 0;
//        int ans = Integer.MIN_VALUE, profit;
//        for (int j = i; j < prices.length; j++) {
//            if(flag == 1) {
//                if(dp[j] != Integer.MIN_VALUE)
//                    profit = dp[j];
//                else {
//                    profit = rec(prices, j+1, 2, prices[j]);
//                    dp[j] = profit;
//                }
//            }
//            else {
//                profit = (prices[j] - prev);
//                profit += rec(prices, j+2, 1, -1);
//            }
//            ans = Math.max(ans, profit);
//        }
//        return Math.max(0, ans);
//    }
    public static int rec2(int i, int[] prices, boolean canBuy) {
        if(i >= prices.length)
            return 0;

        if (canBuy) {
            if(dp[i][0] != Integer.MIN_VALUE)
                return dp[i][0];
            int buy = rec2(i+1, prices, false) - prices[i];
            int wait = rec2(i+1, prices, true);
            dp[i][0] = Math.max(buy, wait);
            return dp[i][0];
        }
        else {
            if(dp[i][1] != Integer.MIN_VALUE)
                return dp[i][1];
            int sell = prices[i] + rec2(i+2, prices, true);
            int wait = rec2(i+1, prices, false);
            dp[i][1] = Math.max(sell, wait);
            return dp[i][1];
        }
    }
    public static int maxProfit(int[] prices) {
        dp = new int[prices.length][2];
        Arrays.fill(dp, Integer.MIN_VALUE);
        return rec2(0, prices, true);
//        return rec(prices, 0, 1, -1);
    }

    public static void main(String[] args) {

        System.out.println(maxProfit(new int[] {4,2,7,1,11}));
    }
}
