#include <iostream>

using namespace std; 

//node that will be an element of linked list 
struct node
{
  int data; 
  struct node * next;
};

//maintain two pointers for implementing circular array
struct node * front = NULL; 
struct node * rear = NULL; 

void enqueue(int x){
  //create a node and assign values 
  struct node * newnode; 
  newnode = new node(); 
  newnode->data = x; 
  newnode->next = NULL; 

  //insert the node in the queue 
  //when there is np element in the queue /empty
  if(front==NULL && rear==NULL){
    front = rear = newnode;
  }
  else{
    //when queue is not empty
    //add node to next pointer of curr rear
    rear->next = newnode;
    //update new rear, which is new node 
    rear = newnode;
  }

} //end of the enqueue function 

void display(){
  //create a temporary pointer to iterate list
  struct node * temp;
  if(front==NULL && rear==NULL){
    cout <<"The list is empty"<<endl; 
  }
  else{
    struct node *temp = front;
    while(temp!=NULL){
      cout << temp->data <<endl;
      temp = temp->next;  
    }
  }
} //end of the display function 

void dequeue(){
  //we do not need paarmeter because we always know queue is built on FIFO which is to say that the first inserted element will the one that will be deleted first 
  //what does this delete represents in real world application?
  //access and save the current front so you can delete it 
  struct node * temp;
  temp = front;
  if(front==NULL && rear==NULL){
    cout << "There is no element to dequeue/empty queue "<<endl;
  }else{
    front = front->next;
    cout <<"The deleted node is "<<temp->data<<endl;
    delete(temp);
  }
} //end of the dequeue function 

void peek(){
  //check for underflow condition 
   if(front== NULL && rear==NULL){
    cout << "There is no element to dequeue/empty queue "<<endl;
  }else{
    cout<<"The front element is "<<front->data<<endl;
  }

} //end of the peek() function 






int main() {

  enqueue(5);
  enqueue(15);
  enqueue(25);
  enqueue(35);
  enqueue(45);

  display();

  peek();

  dequeue();

  peek();


}
