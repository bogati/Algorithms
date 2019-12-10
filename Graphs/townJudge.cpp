//997. Find the Town Judge
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        // create a graph 
        //N is the number of nodes 
        vector<vector<int>> graph(N+1); 
        
        for(int i=0 ; i<trust.size(); i++){
            
                //here form a graph 
                int src = trust[i][0];
                int dest = trust[i][1];
                
                graph[src].push_back(dest);    
        }
        //DEBUGGING , CHECK WHAT IS IN graph
        for(int i=0;i<graph.size();i++){
          for(int j=0; j<graph[i].size();j++){
            cout << "node "<<i<<" has value "<<graph[i][j] <<endl;
          }
          
        }
        cout <<"The size of the graph is "<<graph.size()<<endl;
        
        //once graph is created , iterate through it to find diconnected node and every other node has connection with this disconnected node, in other other words satisfy the condition for becoming the town judge 
        //checking for the condition- town judge trusts nobody
        vector<int> judge ; 
        for(int i=1; i<graph.size(); i++){
            if(graph[i].size()==0){
                // insert in judge array 
                judge.push_back(i); //i is the value of node=people
                
            }
        }
        cout << "The size of the elgibile judge is "<<judge.size()<<endl;
        //checking for the condition - everybody trusts town judge
     
        for(int i=0; i<judge.size();i++){
            int break_for = 0; 
            for(int j=1;  j<graph.size(); j++){
              if(j!=judge[i]){
                int trust_judge = 0; 
                for(int k=0; k<graph[j].size(); k++){
                    //check the condition here 
                    if(graph[j][k]==judge[i]){
                       cout << "judge match "<<judge[i]<<endl;
                       cout << "value of j is "<<j<<endl;
                        trust_judge = 1; 
                        break;
                    }
                    
                }
                //all the values checked to see if it matches judge
                if(trust_judge == 0){
                  cout << "enter red zone 1"<<endl;
                  cout << "value of j is "<<j<<endl;
                    break_for = 1;
                    break;     
                }
                if(break_for ==1){
                  cout << "enter red zone 2"<<endl;
                    break;
                }
                
            } //end of the middle for loop 
            //at this point judge did not satisy any conditions
            } //END OF THE IF  
            if(break_for == 0){
            return judge[i];
                
            }
            
        } //end of the outer for loop 
        return -1; 
            
    } //END OF THE FUNCTION 
};
