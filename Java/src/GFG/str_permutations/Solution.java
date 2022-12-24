package GFG.str_permutations;

// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/#

import java.util.*;

class Solution {
    static List<String> perms = new ArrayList<String>();
    public static List<String> find_permutation(String S) {
        rec(0, S);
        
        HashSet<String> h1 = new HashSet<>(perms);
        List<String> arr1 = new ArrayList<>(h1);
        Collections.sort(arr1);
        return arr1;
    }

    public static void rec(int l, String S){
        if(l==S.length()-1)
            perms.add(S);
            
        else{
            for(int i=l; i<S.length(); i++){
                S=swap(l, i, S);
                rec(l+1, S);
                S=swap(l, i, S);
            }
        }

    }

    public static String swap(int i, int j, String S){
        if(i==j) return S;

        char[] b = S.toCharArray();  
        char ch;  
        ch = b[i];  
        b[i] = b[j];  
        b[j] = ch; 
        return(String.valueOf(b));
    }

    public static void main(String[] args) {
        find_permutation("ljr");
        System.out.println(perms);
    }


}