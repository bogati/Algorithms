#include <iostream>
#include <vector>

using namespace std; 
//node in a linked list 
struct node{
  int val; 
  struct node * next; 
};
//head is initially null 
//you can access first node  information with head
struct node * head = NULL;

//dynamically creating a node
void createNode(int data){
  
  struct node * ll_val = new struct node; 
  ll_val->val = data; 
  ll_val->next = NULL;
  if (head==NULL){
    head = ll_val;
    
  }else{
    struct node *iter = head; 
    while(iter->next!=NULL){
      iter = iter->next;

    }
    iter->next = ll_val;
  }

  
  
}


//Create a method which prints the value of each node until the tail
 void print_Values(){

   struct node * temp = head; 
   

   while(temp->next != NULL){
     cout << temp->val;
     temp = temp->next;
   }
     cout << temp->val;

 }


int main() {
  
  vector<int> val = {1,5,7,10};

  for(int i=0; i<val.size();i++){
    createNode(val[i]);
  }
  
  print_Values();
  
}
