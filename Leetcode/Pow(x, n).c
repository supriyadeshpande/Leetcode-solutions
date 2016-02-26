/******************

Implement pow(x, n).

******************/


public class Solution {
    
    public double myPow(double x, int n) {
        
        double ans = 1;
        if (n == 0)
            return 1;
        if(n < 0)
        {
            n = -n;
            x = 1/x;
        }
        
        while(n > 0)
        {
            if(n%2 != 0) {
                ans*=x;
            }
            n = n/2;
            x= x*x;
        }
        return ans;
    }
}