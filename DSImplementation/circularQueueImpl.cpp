#include <iostream>
#define N 10 
//implementation of circular queue with the goal of efficient memory management 
//the main idea is using mod 
using namespace std; 

int queue[N];
int front = -1; 
int rear = -1; 

void enqueue(int x){
  if(front==-1 && rear==-1){
    front = rear = 0;
    queue[rear] = x;
  }
  else if((rear+1)%N == front){
    //checking the condition for overflow/no spot in the array is empty 
    cout <<"queue is full, no element can be inserted"<<endl; 
  }
  else{
    //insert the element at rear position 
    rear = (rear+1) % N;
    queue[rear] = x; 
  }
} //end of the enqueue function 

void dequeue(){
  //check for the empty array 
  if(front==-1 && rear==-1){
    cout<<"The array is empty, nothing to delete"<< endl; 
  }
  else if(front == rear){
    //queue has only one element left, hence when the only element is deleted we need to take care how rear and front should be updated
    front = rear = -1;
  }
  else{
    //array/queue has more than one element 
    cout<<"The deleted element is "<< queue[front]<<endl;
    //update new front  
    front = (front+1)%N;
  }
} //end of the dequeue() function

void display(){
  //i could be at the middle of the array 
  int i = front; 
  while(i!=rear){
    cout << queue[i] <<endl;
    i=(i+1)%N; 
  }
}

void peek(){
  cout << "The element at the front is"<<queue[front]<<endl;
}


int main(){
  enqueue(23);
  enqueue(24);
  enqueue(25);
  enqueue(26);

  display();

  dequeue();
  display();
  peek();


}
