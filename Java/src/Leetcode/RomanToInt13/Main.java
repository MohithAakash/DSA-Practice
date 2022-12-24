package Leetcode.RomanToInt13;

public class Main {
 
    public static void main(String[] args) {        
        Main main = new Main();
        int result = main.romanToInt("LVIII");
        System.out.println(result);
    }

    public int romanToInt(String s) {

        int curr, prev=s.charAt(0);
        int total=0;

        for (char c : s.toCharArray()) {
            curr = c;
            if (curr > prev) {
                total-=prev;
            }
            total += curr;
        }

        return total;
    }
}