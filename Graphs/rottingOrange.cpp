class Solution {
public:
    

    
    int orangesRotting(vector<vector<int>>& grid) {
        vector<int> grid_val(2);
        
        int min_Time=0; 
        int m = grid.size();
        int n = grid[0].size();
        
        queue<std::vector<int>> q_val;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                //check if orange is rotten 
                if(grid[i][j]==2){
    //check all the directions of the grid and convert to rotten   
                    
                    grid_val[0]=i;
                    grid_val[1]=j;
                    
                    q_val.push(grid_val);
                    
                }
            }       //end of inner for 
        } 
        //end of outer for 
        //stop the count of unti time here 
        grid_val[0]=m+1;
        grid_val[1]=n+1;
        q_val.push(grid_val);
        
        //convert to rotten here 
        while(!q_val.empty()){
            //flag is used to mark when to count 1 unit of a time 
            bool flag = false ; 
            
            while(q_val.front()[0]!=m+1){
                // when the front value becomes null then it is 1 unit of time 
                vector<int> temp = q_val.front();
                int i = temp[0];
                int j = temp[1];
                q_val.pop();
                
                //if has valid indexes and adjacent is a fresh oranges 
                if(isValid(i+1, j,m,n) && grid[i+1][j]==1){
                    if(!flag){
                        flag = true;
                        min_Time++;
                    } //end of if 
                    grid[i+1][j]=2;
                    grid_val[0]=i+1;
                    grid_val[1]=j;
                    q_val.push(grid_val);
                }
                
                if(isValid( i-1,j,m,n) && grid[i-1][j]==1){
                    if(!flag){
                        flag = true;
                        min_Time++;
                    } //end of if 
                    grid[i-1][j]=2;
                    grid_val[0]=i-1;
                    grid_val[1]=j;
                    q_val.push(grid_val);
                }
                    
                if(isValid(i,j-1,m,n) && grid[i][j-1]==1){
                    if(!flag){
                        flag = true;
                        min_Time++;
                    } //end of if 
                    grid[i][j-1]=2;
                    grid_val[0]=i;
                    grid_val[1]=j-1;
                    q_val.push(grid_val);
                }
                    
                if(isValid(i, j+1,m,n) && grid[i][j+1]==1){
                    if(!flag){
                        flag = true;
                        min_Time++;
                    } 
                    grid[i][j+1]=2;
                    grid_val[0]=i;
                    grid_val[1]=j+1;
                    q_val.push(grid_val);
                }
                    
            } //end of inner while 
            
            //one iteration is finished which also means 1 unti of time has passed 
        //remove last value in the queue that tells us the end of 1 unit time
        q_val.pop();
            
        if(!q_val.empty()){
        grid_val[0]=m+1;
        grid_val[1]=n+1;
        q_val.push(grid_val);
            
        }
            
        } //end of outer while 
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    min_Time = -1; 
                }
            }
        }
    
        
        return min_Time;
                   
    
    } //end of rotten function 
    
    //function to check if the index is valid 
    bool isValid(int i, int j, int m, int n){
        if (i<0 || j<0 || i>=m || j>=n ){
            return false; 
        }
        return true; 
    } //end of isValid function 
};
