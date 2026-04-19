class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int maxElement = arr[n-1];

        vector<int> res(n);
        res[n-1] = -1;

        for(int i = n-2; i>=0; i--)
        {
            res[i] = maxElement;
            maxElement = max(maxElement, arr[i]);
        }

        return res;
    }
};