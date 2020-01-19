
//73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        //keep track of all the positions of 0 in the matrix first 
        // and convert their rows and cols to 0 respectively 
        
        
        vector<int> grid_val(2);
        queue<vector<int>> q_val;
        
        for (int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                     grid_val[0]=i;
                     grid_val[1]=j;
                     q_val.push(grid_val);
                }
            }
        }
        
        while(!q_val.empty()){
                    
                    vector<int> temp = q_val.front();
                    int i = temp[0];
                    int j = temp[1];
                    q_val.pop();
            
                    for(int temp_j=0; temp_j<n;temp_j++ ){
                      //i is constant 
                        matrix[i][temp_j] = 0; 
                      
                    }
                    for(int temp_i=0; temp_i<m;temp_i++ ){
                      //j is constant 
                        matrix[temp_i][j] =0 ;
                      
                    }
                    
        } //end of while 
        
    }
};
