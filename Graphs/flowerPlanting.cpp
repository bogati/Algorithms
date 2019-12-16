// Leetcode 1042 Flower Planting with No Adjacent 
class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        //create a adjacency list here 
        vector<vector<int> > graph(N+1);
        //filling the values in the adj list 
        for(int i=0; i<paths.size();i++){
            int src = paths[i][0];
            int dest = paths[i][1];
            //bidirectional graph 
            graph[src].push_back(dest);
            graph[dest].push_back(src); 
        }
        //store the results of types of flower for each garden
        vector<int> result(N+1); //will have values 1 through 4
        
        for(int i=0;i<result.size();i++){
            result[i] =-1; 
        }
        
        for(int i =1; i< graph.size();i++){
            
            map<int,int> ht;  
            for(int j=0; j<graph[i].size(); j++){
        
                
//set garden 1's value to any value that is not equal to any of the value present in its adjacent node 
                
                //push the flower values in adjacent garden
                if(result[graph[i][j]] !=-1){
                ht[result[graph[i][j]]] = result[graph[i][j]] ; 
                }
            } //end of the inner for loop 
            
            for(int k=1; k <=4;k++){
                //check in ht if the flower has been picked or not
                if(ht.find(k)==ht.end()){
             //value not found , if value not found 
            //then use this value=flower for the adjacent garden
                    result[i] = k;
                    break;
                }
                
            } //end of the flower assignment job 
            
        
            
        } 
        //I AM JUST LAZY TO FIX THE INDEXING RIGHT NOW 
        //DO IT LATER , THIS IS NOT GOOD PRACTICE !!!
        //THIS COPYING VALUES IN ARRAY IS CHEATING TOO :D
        vector<int> vec ;
        for(int i=1; i<result.size();i++){
            vec.push_back(result[i]);
        }
        return vec;
        
        
        
    }
};
