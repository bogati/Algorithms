#include <iostream>
using namespace std;

string to_Ascii(int num){
  
  //rounding val will give us number of multiples of 26
  int rounding_Val = 0; 
  //print_Char will will give us ascii value of a num
  char print_Char ;
  string ascii_str = "";
  if(num<1) return "none" ; 
  if(num>0 && num<=26){
    print_Char = char(num+64); 
    cout << "The ascii character is -if "<<char(num+64)<<endl;
    
  }
  else{
    rounding_Val = num/26 ;
    
    print_Char = char((num%26)+64);
    cout << "The ascii character is -else "<< char(num%26 +64)<<endl;
    
  }
  cout << "rounding val is "<<rounding_Val <<endl;
  
  if(rounding_Val!=0){
    for(int i=0; i<rounding_Val; i++){
      ascii_str = ascii_str + 'A' ;
    }
  }
  
  ascii_str  = ascii_str + print_Char; 
  
  
  
  
  
  
  
  return ascii_str;
  
  
  
}

int main() {
  
  
	cout << to_Ascii(100);
	return 0;
}

