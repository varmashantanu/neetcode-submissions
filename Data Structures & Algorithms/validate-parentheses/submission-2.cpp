class Solution {
public:
    bool isValid(string &s) {
        
        stack<char> stck;

        for(char &c : s)
        {
            if(c == '{' || c == '(' || c == '[')
                stck.push(c);
            else
            {
                if(stck.empty())
                    return false;
                else
                {   
                    char top = stck.top();
                    if((top == '{' && c == '}') ||
                       (top == '(' && c == ')') ||
                       (top == '[' && c == ']')) 
                       stck.pop();
                    else
                        stck.push(c);   
                }    
            }

        }

        return stck.empty();
    }
};
