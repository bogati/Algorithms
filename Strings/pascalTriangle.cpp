//118 Pascal's Triangle 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>> result;
        if(numRows==0){return result;}
        vector<int> temp0;
        temp0.push_back(1); 
        result.push_back(temp0); 
        if(numRows==1){return result;}
        
        
        //insert a list with value 1 as a first element in 2D vector
        
        for(int i=1; i<numRows; i++){
            //vector<int> v(10);
            vector<int> temp2(i+1);
             temp2[0] = 1; 
             temp2[temp2.size()-1] = 1; 
            for(int j=1; j<i;j++){
                
        temp2[j] = result[i-1][j-1] + result[i-1][j];
                
                
                
                
            } //end of the inner for loop 
            result.push_back(temp2);
            
        } //end of the outer for loop 
        
        return result;
    } //end of the function 
};
