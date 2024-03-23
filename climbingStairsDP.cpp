class Solution {
public:
    int climbStairs(int n) {

        // base case ..
        if (n == 0 || n == 1) 
            return 1;
       
        // recursive case will gice TLE.....
        //int ans = climbStairs(n-1) + climbStairs(n-2);

        // More Optimised 

        int curr = 1, prev = 1;
        for(int i=2; i<=n; i++)
        {
            int temp = curr;
            curr = prev + curr;
            prev = temp;
        }

        return curr;        
    }
};