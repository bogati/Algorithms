//leetcode 344 reverse a string 

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        for(int i=0; i<s.size()/2;i++){
            char temp = s[s.size()-1-i];
            s[s.size()-1-i] = s[i];
            s[i] = temp; 
            
        }
        for(int i=0; i<s.size(); i++){
        cout << s[i];
        }
         
        
    }
};
