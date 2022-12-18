// https://leetcode.com/problems/container-with-most-water/

public class Main {
 
    public static void main(String[] args) {        
        Main main = new Main();
        int[] height = {0,2};
        int result = main.maxArea(height);
        System.out.println(result);
    }

    public int maxArea(int[] height) {
        int max_amt = 0, curr_amt;

for (int i = 0; i < (height.length)-1; i++) {
    for (int j = (height.length)-1; j > i; j--) {
        
        if (height[i] < height[j]) {
            curr_amt = (j-i) * height[i];
            max_amt = curr_amt > max_amt ? curr_amt : max_amt;
            break;
        }

        curr_amt = (j-i) * height[j];
        max_amt = curr_amt > max_amt ? curr_amt : max_amt;

    }
}
return max_amt;


}}

// 

