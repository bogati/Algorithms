#include <iostream>
#include <vector>
using namespace std ;

void print_Spiral(vector<vector<int>> matrix,int i, int j, vector<vector<bool>> &state){
  //handle the base cases 
  //check for out of bound
  
  if(i>=matrix.size() || j>=matrix[0].size()|| i<0 || j<0 ){
    return ;
  }
  
  //check if the element has been already  visited 
  

  if(state[i][j]==false){
    state[i][j] =true;
    cout << matrix[i][j]<<endl;
    

    //right
    print_Spiral(matrix,i,j+1,state);
    //down
    print_Spiral(matrix,i+1,j,state);
    //left
    print_Spiral(matrix,i,j-1,state);
    //up
    print_Spiral(matrix,i-1,j,state);

    /*
    //This is another way of printing 
    print_Spiral(matrix,i,j+1,state);
    //down
    print_Spiral(matrix,i-1,j,state);
    //left
    print_Spiral(matrix,i,j-1,state);
    //up
    print_Spiral(matrix,i+1,j,state);
    */
   

    

  }
}

void spiral (vector<vector<int>> vec){
  vector<vector<bool>> state ={{false,false,false,false,false},{false,false,false,false,false},{false,false,false,false,false},{false,false,false,false,false}};

  //call the helper function here 
  print_Spiral(vec,0,0, state);

}

int main() {
  vector<vector<int>> vec = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
  spiral(vec);


}
