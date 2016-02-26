/******************
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

******************/


public class Solution {
    public int climbStairs(int n) {
        
        int[] total = new int[n + 1];
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        
            
        total[0] = 0;
        total[1] = 1;
        total[2] = 2;
        
        int i = 0;
        for(i = 3; i <= n; i++)
        {
            total[i] = total[i-1] + total[i-2];
        }
        return total[i-1];
        
    }
}