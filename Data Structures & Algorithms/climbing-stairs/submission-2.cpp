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

        int x, y;

        if(memo[n-1] != 0)
            x = memo[n-1];
        else
        {
            x = climbStairs(n-1);
            memo[n-1] = x;
        }    

        if(memo[n-2] != 0)
            y = memo[n-2]; 
            else
        {
            y = climbStairs(n-2);
            memo[n-2] = y;
        }   

        return x + y;   
    }
};
