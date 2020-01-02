//28. Implemetn strStr() --
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        //LESSON Learned : missing this edge case
        if(haystack.length() < needle.length())
            return -1;
        
        if(needle=="") return 0; 
        //int index=0; 
        int ptr_h=0; 
        for(int i=0; i<haystack.length(); i++){
            ptr_h = i; //know where to start pointer 
            int count_match =0; 
            for(int j=0; j<needle.length(); j++){
                if(haystack[ptr_h]!=needle[j]){
                    //come out of inner for loop and check nextchar
                    break;
                }else{
                    count_match = count_match+1; 
                    ptr_h = ptr_h+1; 
                    
                }
            }//end of the inner for loop 
                if(count_match == needle.length()){
                    return i; 
                }      
        } //end of the outer for loop 
        return -1; 
        
    } //end of the function 
};
