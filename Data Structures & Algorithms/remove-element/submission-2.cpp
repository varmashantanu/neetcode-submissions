class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int curr = 0;
        for(int x : nums)
        {
            if(x != val)
            {
                swap(x, nums[curr]);
                curr++;
            }
        }
        return curr;
    }
};