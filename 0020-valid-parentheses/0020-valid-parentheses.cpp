class Solution 
{
public:
    bool isValid(string s) 
    {
        if (s.size() % 2 == 1)
            return false;

        vector<char> stack;

        int count = 0;
        
        for(int i = 0; i < s.size(); i ++)
        {
            if(s[i] == '(')
            {
                stack.push_back(')');
                count++;
                continue;
            }

            if(s[i] == '[')
            {
                stack.push_back(']');
                count++;
                continue;
            }

            if(s[i] == '{')
            {
                stack.push_back('}');
                count++;
                continue;
            }
                
            if(s[i] == ')' && stack.size() > 0)
            {
                if(stack.back() != ')')
                    return false;
                stack.pop_back();
                continue;
            }
            if(s[i] == ']' && stack.size() > 0)
            {
                cout << stack.size();
                if(stack.back() != ']')
                    return false;
                stack.pop_back();
                continue;
            }
            if(s[i] == '}' && stack.size() > 0)
            {
                cout << stack.size();
                if(stack.back() != '}')
                    return false;
                stack.pop_back();
                continue;
            }
        }

        if(stack.size() == 0 && count == s.size()/2)
            return true;
        else
            return false;
    }
};