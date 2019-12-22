//387. First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0; i<s.length(); i++){
            int count_unq = 0;
            for(int j=0; j<s.length(); j++){
               
               
                if(s[i] != s[j] && (i !=j)){
                count_unq = count_unq +1;}
                
                   
            }//end of the inner for    
               
            
            if(count_unq == s.length()-1){
                return i;
            }
        }//end of the outer for 
        
        return -1; 
        
    }
*/
    //use of Hash table 
    //key is char and value is Integer or the index 
    map<char,int> ht; 
    for(int i=0; i<s.length(); i++){
        //char not found 
        if(ht.find(s[i]) == ht.end()){
            ht[s[i]] = i;
        }else{
        //else char found means cannot be unique charcater
            ht[s[i]] = -1; //invalidating     
        }  
    }
        
    //now check the hash table and pick the minimum index unique value
        
        int min = INT_MAX; 
        map <char,int> :: iterator itr; 
        
        for (itr = ht.begin(); itr != ht.end(); ++itr){
            if(ht[itr->first] >-1 && ht[itr->first]<min){
                min = ht[itr->first];
            }
        }
        return min==INT_MAX ? -1 : min; 
        
}//end of the function 
    



};
