// https://leetcode.com/problems/3sum/

import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        Arrays.sort(nums);
        int n=nums.length;
        int l,r,sum;
        for(int i=0; i<n-2; i++){
            l=i+1; 
            r=n-1;
            while(l<r){
                sum=nums[l]+nums[r];
                if(nums[i] == -(sum)){
                    List<Integer> temp = new ArrayList<Integer>();
                    temp.add(nums[i]);
                    temp.add(nums[l]);
                    temp.add(nums[r]);
                    result.add(temp);

                    while(nums[l]==nums[l+1] && l+1<r) l++;
                    while(nums[r]==nums[r-1] && r-1>l) r--;
                    l++; r--;

                }
                else if(nums[i] < -sum) l++;
                else r--;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;

        }
        return result;
    }
}