//Leetcode 242. Valid Anagram 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int count[26]; 
        
        for(int i=0; i<26; i++){
            count[i] = 0 ; 
        }
        
        for(int i=0; i<s.length() ;i++ ){
            int vals = s[i]; 
            int valt = t[i];
            count[vals-97] = count[vals-97]+1;
            count[valt-97] = count[valt-97]-1;
        }
        
        /* for(int i=0; i<t.length() ;i++ ){
            int val = t[i]; 
            count[val-97] = count[val-97]-1;
        }
        */
        for(int i=0; i<26;i++){
            if(count[i]!=0){
                return false ;
            }
        }
        
        return true;
        
    }
};
