package Leetcode.ReverseInteger7;

class Solution {
    public int reverse(int num) {
        int ans = 0;
        int pLimit = Integer.MAX_VALUE, nLimit = Integer.MIN_VALUE;
        while (num != 0) {
            int digit = num % 10;
            if(((num > 0) && ((pLimit - digit) / 10) < ans) || ((num < 0) && ((nLimit - digit) / 10) > ans ))
                return 0;
            ans = (ans * 10) + digit;
            num /= 10;
        }

        return ans;
    }

}
