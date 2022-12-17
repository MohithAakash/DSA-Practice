import java .util.*;
class Pattern {
    public static void main(String[] args) {
         int n=3; 
         int x=0;
         int y=n;
         do{
             String str="";
             for(int i=0;i<(y-n)*2;i++){
                    str+="-";
             }
             for(int i=x+1;i<=x+n;i++){
                 String temp=Integer.toString(i);
                 str +=temp+"*";
             }
             int a=(((n*(n-1)/2)*2)+1)+x+n;
             for(int i=0;i<n;i++){
                String temp2=Integer.toString(a++);
                str +=temp2+"*";
             }
             str=str.substring(0,str.length()-1);
             System.out.println(str);
             x+=n;
         }while(--n>0);
         
    }
}