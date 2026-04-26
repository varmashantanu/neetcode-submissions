// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {

        int n = pairs.size();
        if(n == 0)
            return {};

        vector<vector<Pair>> res;

        res.push_back(pairs);

        for(int i=1; i<n; i++)
        {
            vector<Pair> temp = res[res.size()-1];
            int j=i;

            while(j > 0 && temp[j].key < temp[j-1].key)
            {
                swap(temp[j], temp[j-1]);
                j--;
            }

            res.push_back(temp);
        }

        return res;
    }
};
