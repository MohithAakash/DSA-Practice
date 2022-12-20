package GFG.hanoi;



class Solution{
    
    static int i=0, count, n1, n2;
    
    static void hanoi(int N, int src, int dest, int aux){
        
        if(N==0) return;
        
        hanoi(N-1, src, aux, dest);
        i++;
        if(i==count){
            n1=src;
            n2=dest;
            return;
        }
        hanoi(N-1, aux, dest, src);
        
        
    }
    
}