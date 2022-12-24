package GFG.WineBuyingAndSelling;

class Solution {
    static long wineSelling(int arr[],int n){
        long ans = 0;
        int i = 0, j = 0;
        while(true) {
            while (i < n && arr[i] <= 0)
                i++;
            while (j < n && arr[j] >= 0)
                j++;
            if(i == n || j == n ) break;
            int change = Math.min(arr[i], -arr[j]);
            ans += (Math.abs(i - j) * change);
            arr[i] -= change;
            arr[j] += change;
        }
        return ans;
    }
}
