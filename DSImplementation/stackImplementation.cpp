#include <iostream>
#define N 10
using namespace std;

//implementation of Stack 
//define the size of the Stack 
int stk[N];
//static sized stack 

int top = -1; 


void push(){
  int x; 
  cout << "please enter the number to push to the stack: "<<endl;
  cin>>x;
  if(top == N-1){
    cout << "stack overflow"<<endl; 
  }else{
    top++;
    stk[top] = x; 
  }
  
} //end of push() 

void pop(){
  int item ; 
  if(top==-1){
    cout <<"stack underflow"<<endl; 
  }else{
    item = stk[top]; 
    cout <<"the item that you just popped is "<<item<<endl; 
    top--; 
  }
  
} //end of pop()

void peek(){
  
  if(top==-1){
    cout <<"stack underflow"<<endl; 
  }else{
    
    cout <<"the top element is  "<<stk[top]<<endl; 
  }
  
} //end of peek()

void display(){
  int i; 
  for(i=top; i>=0; i--){
    cout << "The value is "<<stk[i]<<endl;
  }
  
} //end of display()

int main() {
	
  int ch; 
 
  
  do{
    cout <<"\n please enter your choice : \t";
    cout <<"\n please enter your 0 to quit : \t";  
    
    cin >> ch; 
    cout << "your choice is "<<ch<<endl;
    
    
    switch(ch)
    {
      case 1: push();
      break; 
      
      case 2: pop();
      break; 
      
      case 3: peek(); 
      break; 
      
      case 4: display();
      break;
      
      default:
      cout << "inavalid choice "<<endl; 
    }
  }while(ch!=0);
  
  

	return 0 ;
}
