/*
Algorithm 
1. Scan the infix expression from left to right. 
2. If the scanned character is an operand, output it. 
3. Else, 
      1 If the precedence of the scanned operator is greater than the precedence of the operator in the stack(or the stack is empty or the stack contains a ‘(‘ ), push it. 
      2 Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator. 
        After doing that Push the scanned operator to the stack. (If you encounter parenthesis while popping then stop there and push the scanned operator in the stack.) 
4. If the scanned character is an ‘(‘, push it to the stack. 
5. If the scanned character is an ‘)’, pop the stack and and output it until a ‘(‘ is encountered, and discard both the parenthesis. 
6. Repeat steps 2-6 until infix expression is scanned. 
7. Print the output 
8. Pop and output from the stack until it is not empty.
*/

class Solution
{
    public:
    
    int prec(char op)
    {
        if(op=='^')
        return 3;
        else if(op == '*' || op == '/')
        return 2;
        else if(op == '+'|| op == '-')
        return 1;
        else
        return 0;
    }
    string infixToPostfix(string s)
    {
        // Your code here
        stack<char>st;
        string res="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i]<='Z'))
            {
                res=res+s[i];
            }
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    res = res+st.top();
                    st.pop();
                }
                //if(st.top() == '(')
                    st.pop();
            }
            else
            {
                while(!st.empty() && prec(s[i]) <= prec(st.top()))
                {
                   res = res+st.top();
                        st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            res = res+st.top();
            st.pop();
        }
        return res;
    }
};
