class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
       if(strs.size()==0){return "";}
       
        string str = "";

        //int count = 0;  
        for(int i=0; i<strs[0].length(); i++){
            for(int j=1; j<strs.size(); j++){
                if(i>=strs[j].length() || strs[0][i]!=strs[j][i]){
                    return str;
                }
            } //end of the inner for
                    //they are the same 
                    str = str + strs[0][i];
                }
            
        return str;
        
    } //end of the function 
};
