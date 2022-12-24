package Leetcode.CircularTour;// https://www.youtube.com/watch?v=zcnVaVJkLhY

class Solution
{
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    // Input:
    // N = 4
    // Petrol   = 4 6 7 4
    // Distance = 6 5 3 5
    // Output: 1
    
    int tour(int petrol[], int distance[])
    {
    int n=petrol.length;
    int start=0;
    int end=1;
    int count=petrol[start]-distance[start];
    while(start!=end||count<0){
        while(count<0&&start!=end){
            count-=petrol[start]-distance[start];
            start=(start+1)%n;
            if(start==0)
                return -1;
        }
        count+=petrol[end]-distance[end];
        end=(end+1)%n;
    }
    return start;

    // int n=petrol.length;
    // int start,avail,bal,j,k;

    // for (int i = 0; i < n; i++) {
    //     start=i;
    //     bal=0;
    //     for (j = 0; j < n; j++) {
    //         k=(i+j)%n;
    //         avail = petrol[k] + bal;
    //         bal = avail - distance[k];
            
    //         if(bal<0) break;
    //     }

    //     if (j==n) return start;
    // }

    // return -1;
    
    }
}