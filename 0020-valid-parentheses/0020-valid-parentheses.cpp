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

       if (s.size() % 2 == 1)
            return false;

        int x = s.size() / 2;

        int j=0;
        int i = 1;
        while(i<=x)
        {
            
            if((s[x-i] == '(')&&(s[x+j] != ')'))
                return false;

            if((s[x-i] == '[')&&(s[x+j] != ']'))
                return false;

            if((s[x-i] == '{')&&(s[x+j] != '}'))
                return false;
            i++;
            j++;


        }


        return true;
    }
        // int num1 = 0;
        // int num2 = 0;
        // int num3 = 0;
        // int num4 = 0;
        // int num5 = 0;
        // int num6 = 0;

        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(') {
        //         num1++;
        //         continue;
        //     }
        //     if (s[i] == ')') {
        //         num2++;
        //         continue;
        //     }
        //     if (s[i] == '[') {
        //         num3++;
        //         continue;
        //     }
        //     if (s[i] == ']'){
        //         num4++;
        //         continue;
        //     }
        //     if (s[i] == '{'){
        //         num5++;
        //         continue;
        //     }
        //     if (s[i] == '}')
        //         num6++;
        // }

        // if ((num1 != num2) || (num3 != num4) || (num5 != num6))
        //     return false;

    //     for (int i = 0; i < s.size(); i++) 
    //     {
    //         if (s[i] == '(') 
    //         {
    //             for (int j = i + 1; j < s.size(); j++) 
    //             {
    //                 if (s[j] == ')') 
    //                 {
    //                     if(j-i % 2 == 0)
    //                         return false;
                        
    //                     int x = i + 1;
    //                     int y = j - 1; 

    //                     for(x ; x < j-i-1; x ++)
    //                     {
    //                         isValid();
    //                     }

    //                     s.erase(j, 1);
    //                     s.erase(i, 1);

    //                     break;
    //                 }
    //             }
    //         }
    //     }

    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         if (s[i] == '[') 
    //         {
    //             for (int j = i + 1; j < s.size(); j++) 
    //             {
    //                 if (s[j] == ']') 
    //                 {
    //                     if(j-i % 2 == 0)
    //                         return false;

    //                     s.erase(j, 1);
    //                     s.erase(i, 1);
    //                     break;
    //                 }
    //             }
    //         }
    //     }
            
    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         if (s[i] == '{') 
    //         {
    //             for (int j = i + 1; j < s.size(); j++) 
    //             {
    //                 if (s[j] == '}') 
    //                 {
    //                     if(j-i % 2 == 0)
    //                         return false;

    //                     s.erase(j, 1);
    //                     s.erase(i, 1);
    //                     break;
    //                 }
    //             }
    //         }
    //     }

    //     if (s.size() == 0)
    //         return true;

    //     return false;
    // }
};