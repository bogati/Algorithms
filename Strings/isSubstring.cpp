#include <iostream>
using namespace std;

//
//Write a function that accepts two strings and returns 
//whether one string is in another in an efficient manner 

/*
input : two strings 
output : true/false -- whether one string is in another substring
//not a subsequence 

//diagram /visualization 
//example 
//Bimala , mala is a substring 

//what came directly in my head ?
// iterate through the string - spent 5 minutes !!

bimmalamala 
mala => if the next elemeent in str2 does not match then 
go back to the beginning, if end of second string count is length
of second string return true else return false 

*/

bool is_SubString(string str1, string str2){
  
  
  //check the lenght of 2 strings first 
  if(str1.length()>str2.length()){
    str1 = str1;
  }else{
    //if str1 does not have the greater length than str2, then make str2 bigger string 
    str2 = str1; 
  }
  
  //two pointers method 
  int i = 0; 
  int j = 0; 
  int count = 0; 
  
  while(i<str1.length() && j<str2.length()){
    //enter in while only when both of them has the i, j < their length 
    
    if(str1[i]== str2[j]){
      count = count + 1; 
      if(count == str2.length()){
        return true; 
      }
      i++;
      j++;
    }
    else{
      if(count == str2.length()){
        return true; 
      }
      j=0;
      count =0;
      i=i+1;   
    }
    
  } //end of the while 
  return false; 
  
}//end of the function 

int main() {
	cout << is_SubString("Bimala","Bimalala") <<endl;
  cout << is_SubString("aaaa","aaaa")<<endl;
  cout << is_SubString(" "," ")<<endl;
  cout << is_SubString("abcd","abcd")<<endl;
  cout << is_SubString("abcdab ","aacdba")<<endl;
  
  //MORE CLARIFICATION HERE --what will happen in the case below it will return false
  //hence we have to pick the large and small string in the beginning of the program 
  
  cout << is_SubString("Bimala","Bimalala") <<endl;
  
	return 0;
}
