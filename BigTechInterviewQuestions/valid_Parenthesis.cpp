//20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        std::stack <char> stk; 
        //if program sees the open paren push to the stack 
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk.push(s[i]);
            }
            else if(s[i]==')' && !stk.empty() && stk.top()=='('){
            stk.pop();
            }
            else if(s[i]=='}' && !stk.empty() && stk.top()=='{'){
            stk.pop();
            }
            else if(s[i]==']' && !stk.empty() && stk.top()=='['){
            stk.pop();
            }else{
                return false;
                
            }
        } //end of the for loop 
        return stk.empty();
        
    }
};
