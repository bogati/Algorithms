#include <iostream>
#include <vector>
using namespace std;
//https://github.com/bogati/EmployeeReimbursementSystem 


// HI MICHAEL THANK YOU ! COMPLETED THE PROGRAM FOR FUN AT 12:27 PM :) 


// Input: An array of m length containing arrays of n length where where m > 1 and n > 1 
// * The arrays of n length contain ints that can either be (0, 1).
// * In each length n array, any occurance of 1 can only be followed by 1's.
// Output: The index of the 1 closest to the horizontal beginning in the array. 

//Example: 
// Input: {
//  {0,1,1,1,1},
//  {0,0,1,1,1},
//  {0,1,1,1,1},
//  {0,1,1,1,1},
//  {0,1,1,1,1}
//}


vector<int> min_Index(vector<vector< int > > arr,int m, int n){

  int leastZero = 1000000;
  vector<int> output(2); 
  
  for(int i=0; i<m; i++){
    int count_0 = 0; 
    int track_j= 0;
    for(int j=0; j<n; j++){
      //total number of 0's for each row 
       track_j = j; 
      //this was one of the pin point 
      if(arr[i][j] == 1 && count_0 < leastZero){
          output[0] = i; 
          output[1] = j;
        break;
        
      }else{
      count_0++;
      track_j=j;
      }
      
      } //end of the inner for loop 
      
    //second main point 
        if (count_0 < leastZero) {
          
        //cout << "value of count"<<count_0<<endl; 
        leastZero = count_0;
        output[0]=i;
        output[1]=track_j; 
          
        }
        
    } //end of the outer for 
    
    //return the result
    return output; 
}


  





// To execute C++, please define "int main()"
int main() {

vector<vector<int>> vec = {
  {0,1,1,1,1},
  {0,0,1,1,1},
  {0,1,1,1,1},
  {0,1,1,1,1},
  {0,1,1,1,1}
}; 

vector<int> res = min_Index(vec,5,5); 
cout<< "["<<res[0]<<","<<res[1]<<"]"<<endl;


  return 0;
}


