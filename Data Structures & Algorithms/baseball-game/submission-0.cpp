class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        int res = 0;
        stack<int> stck;

        for(string &s : operations)
        {
            if(s == "+")
            {
                int a = stck.top();
                stck.pop();

                int b = stck.top();
                stck.pop();

                stck.push(b);
                stck.push(a);
                stck.push(a+b);
            }
            else if(s == "D")
            {
                int a = stck.top();
                stck.push(2*a);
            }
            else if(s == "C")
            {
                stck.pop();
            }
            else
            {
                stck.push(stoi(s));
            }
        }

        while(!stck.empty())
        {
            res += stck.top();
            stck.pop();
        }

        return res;
    }
};