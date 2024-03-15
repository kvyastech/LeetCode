class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            {
                ans.push(ch);
            }
            else{
                char topch=ans.top();
               if(ans.empty()==false)
               {
                    if(topch=='(' && ch==')')
                {
                    ans.pop();
                }
                else if(topch=='{' && ch=='}')
                {
                    ans.pop();
                }
                else if(topch=='[' && ch==']')
                {
                    ans.pop();
                }
                else{
                    return false;
                }

               }
               else{
                   return false;
               }
            }
        }
        if(ans.empty()==true)
        {
            return true;
        }
        else{
            return false;
        }
    }
};