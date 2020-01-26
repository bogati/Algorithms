#include <iostream>

using namespace std; 
//the main trick here is having the pointer that will point to the newest node which will ensure that we follow the LIFO property 

struct node{
  int data;
  struct node *prev;
};

struct node *top = 0; 

void push(int x){

  //no need to check for the overflow condition because of the dynamic implementation 
  struct node *newnode;
  newnode = new node(); 

  newnode->data = x;
  newnode->prev = top;
  //we update top every time we push the element
  top = newnode ;
}

void display(){
  struct node *temp;
  temp = top ;

  if(top==NULL){
    cout << "stack is empty"<<endl; 
  }
  else{
    while(temp != NULL){
      cout << temp->data<<endl;
      temp = temp->prev; 
    }
  }
} //end of the display() function 

void peek(){
  if(top==NULL){
    cout <<"stack is empty"<<endl; 
  }
  else{
    cout <<"The top element is "<<top->data<<endl;
  }
}

void pop(){
  struct node *temp; 
  temp = top; 
  if(top==NULL){
    cout <<"The stack is empty"<<endl;
  }
  else{
    cout << "The deleted item is "<<top->data<<endl;
    top = top->prev;
    delete(temp);
  }
}

int main(){

  push(8);
  push(9);
  push(10);
  push(11);
  push(12);

  display();

  pop();

  display();

  peek();



}
