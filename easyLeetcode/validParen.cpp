class Solution {
public:
    bool isValid(string s) {
        //Note that an empty string is also considered valid.
        if(s==""){ return true;}
        std::stack <char> stk;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                //when we see the open parenthesis in the string
                //insert it in the stack 
                stk.push(s[i]);
            }
            //stack should not be empty eg "((())))"
            else if(s[i]==')'&& !stk.empty() && stk.top()=='('){
                //if the current parenthesis is closed and the 
                //value at the top of the stack is open of same kind
                
                stk.pop();
                
            }
            else if(s[i]=='}'&& !stk.empty() && stk.top()=='{'){
                //if the current parenthesis is closed and the 
                //value at the top of the stack is open of same kind
                 
                stk.pop();
                
            }
            else if(s[i]==']'&& !stk.empty() && stk.top()=='['){
                //if the current parenthesis is closed and the 
                //value at the top of the stack is open of same kind
                 
                stk.pop();
                
            }else{
                return false;
            }
        } 
        //at the end if stack is empty return true elase false
        return stk.empty();
        
    }
};
