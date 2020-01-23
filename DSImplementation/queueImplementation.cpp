#include <iostream>
#define N 10
using namespace std;

int queue[N]; 
int front = -1; 
int rear = -1; 

void enqueue(){
  int x; 
  cout <<"please enter the number to push to queue"<<endl;
  cin>>x;
  if(rear == N-1){
    //exceeded the max num of elems that can be stored in the queue 
    cout << "overflow"<<endl; 
  }
  else if(front ==-1 && rear == -1){
    //queue is empty 
    front = rear =0; 
    //in queue we insert in th rear 
    queue[rear]=x;
  }else{
    // queue has some data and we want to insert
    //some more data 
    rear++; 
    queue[rear] = x; 
  }
} //end of the enqueue 

void dequeue(){
  if(front == -1 && rear == -1){
    cout << "Queue list is empty "<<endl;
  }
  else if(front == rear){
    // there is only one element in the Queue
    //this means we are deleting the last element in the queue 
    front = rear = -1; 
    //make queue empty again 
  }
  else{
    //front should point to the element that is behind it in the queue line 
    cout << "The value that you just dequeued is "<< queue[front]<< endl;
    front++;
    //the value before front gets lost now which is same as deleting 
    //if you want to print, print element 
    //then do front++
  }
} //end of the dequeue 

void display(){
  if(front == -1 && rear ==-1){
    cout << "queue is empty "<<endl;
  }else{
    int i; 
    for(i=front; i<rear+1; i++){
      cout << "the value is "<<queue[i]<<endl; 
    }
  }
} //end of the display()

void peek(){
   if(front == -1 && rear ==-1){
    cout << "queue is empty "<<endl;
   }else{
     cout <<"The value that is at the top is "<<queue[front]<<endl;
   }
  
} //end of the queue

int main(){
  int ch; 

  do{
    cout <<"please enter 0 if you wish to exit "<<endl;
    cout<<"please enter your choice for queue operation "<<endl;

    cin>>ch; 

    switch(ch){
      case 1: enqueue();
      break;
      case 2:dequeue();
      break;
      case 3:peek();
      break;
      case 4:display();
      break;
      default:
      cout <<"invalid choice, please re-enter"<<endl;

    }

  }while(ch!=0);


  return 0; 
}
