class Solution {

    int* memo;

public:

    Solution()
    {
        memo = new int[100];
        memo[1] = 1;
        memo[2] = 2;
    }

    int climbStairs(int n) {
        
        if(memo[n] != 0)
            return memo[n];
           
        int res = climbStairs(n-1) + climbStairs(n-2);
        memo[n] = res;

        return res;   
    }
};
