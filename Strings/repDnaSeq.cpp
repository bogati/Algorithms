
// 187. Repeated DNA Sequence 

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result; 
        if(s.length()==10){
            return result;
        }
        map<string,int> ht;
        //key = string , value is the count of the string
        
        for(int i=0; i<s.length(); i++){
            if(i+9<s.length()){
                    string sub = s.substr(i,10);
                    if(ht.find(sub)==ht.end()){
                        //could not find element
                        ht[sub] = 1;
                    
                    }
                    else{
                        
                        ht[sub] = ht[sub]+1;
                        if(ht[sub]==2){
                        result.push_back(sub);
                    }
                    }
            
                      
                } //end of the inner for 
                
            } //end of the if loop 
            
     
        
        
        /*map<string, int>::iterator it;
        for ( it = ht.begin(); it != ht.end(); it++ ){
            if((it->second) >=2){
                result.push_back(it->first);
            }
        }*/
        
        return result;
        
        
    } //end of the function 
};
