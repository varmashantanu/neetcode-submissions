class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        int i = 0;

        while(i<n)
        {
            int j = i;
            while(j<n && nums[j] == 1)
                j++;
            res = max(res, j-i);
            i = j+1;
        }

        return res;
    }
};