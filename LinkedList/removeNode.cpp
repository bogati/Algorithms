#include <iostream>
#include <map>
using namespace std ; 

//node 
struct node{
  int data;
  node * link; 
  //node * rlink;
}; 

//pointer to the first node 
//head in the beginning is pointing to null 
struct node * head =NULL; 


struct node* createNode(){
  struct node * n ; 
  n = new node();
  return n ; 
}

//insert a node in a linked list 
void insertNode(int val){
  struct node * temp; 
  temp = createNode();
  temp->data = val; 
  temp->link = NULL; 

  //if the linked list so far we have is nothing that is we just have the null Linked list we need to take care of that condition 

  // if LL is empty assign created node to the head
  if(head== NULL){
    head = temp; 
  }
  //linked list is not empty 
  else{
    //insert the node at the end 
    //think in terms of steps 
    /*
    step1: iterate through your linked list 
    step2: when you find the null 
    step3: insert the address of this newly created linked list to the link of the node in the ll
    */
    //create a temporary variable to store the address of the head (a pointer to the first node)

    node * iter = head ; 
    while(iter->link!=NULL){
      iter = iter->link ; 
    }
    //end of the while here the iter will have null
    iter->link = temp; 
    

  }

} //end of the insertNode function 

//will only work for sorted values 
void delSorted(){
    struct node * curr = head->link ; 

    struct node * prev = head; 
    while(curr){
      if(curr->data == prev->data){
        //data is duplicate in sorted array 
        //delete curr when duplicate found 
        struct node * temp = curr;
         prev ->link = curr ->link ; 
         //delete object with the help of the pointer 
         free(temp);
      }
      else{
        //data is not duplicate , keep iterating 
        prev = curr; 
        curr = curr->link ; 
      }

    } //end of the while loop 
    



  }

  void delUsingLoops(){
    struct node * curr = head ;
    

   
    //struct node * iter = head;

    while(curr!=NULL){
      
      struct node * next = curr->link ;
      struct node * prev_node = curr ;
      while(next!=NULL){
        //comparing the first value with the rest of the values and second with rest and so on .........
        
      if(curr->data == next->data){
        //data matched , delete that node 
        

        struct node * temp = prev_node->link ; 
        free(temp);

        prev_node->link = next->link;
         


      }else{
        //net node is the node one after and previous node becomes current next node
        prev_node = next; 
        next = next->link;
      }
      
     
      }//inside while loop 

     curr = curr->link ;

    } //outside while loop 
    

  }

void traverse(){
    //temporary pointer to traverse the linked list - why need it - if we were to use head for traversing then the address in head will be manipulated which we know that should not be the case ! 
    struct node * it; 

    if(head==NULL){
      cout << "The linked list is empty hence there is nothing to empty"<<endl; 
    }
    else{
      it = head; 
    }
    while(it!=NULL){
      cout << it->data <<endl; 
      it = it->link;
    }

  } //end of the traverse function 

  //sort the linked list 

  void sort_ll (){

    
  }
  
//using the hash table 

void remDup (){
  struct node * prev_node = head ;
  map<int,int> ht; 
  struct node * i = head ; 
  while(i!=NULL){
     
    if(ht.find(i->data)==ht.end()){
      //if value not in hash table 
      ht[i->data ] = i->data ; 
      cout << "inserted data in HT is "<< i->data<<endl;
      //THIS PART OF THE CODE IS QUIET LOGICAL AND CRUCIAL 
      prev_node = i;
    }
    else{
      //value found in hash table which means its duplicate - delete it !! 
      //save the value to be deleted 
      //save the address of current node 
      cout << "in the else stmt "<<endl;
      
      struct node * temp = prev_node->link; 
      free(temp);
       //THIS PART OF THE CODE IS QUIET LOGICAL AND CRUCIAL 
      prev_node->link = i->link;
      
    }//end of the else 
    //prev_node = i; 
    i = i->link; 


  } //end of the while loop 
} //end of the function 



int main() {
 //create a linked list here 

  insertNode(44);
  insertNode(61);
  insertNode(7);
  insertNode(98);
  insertNode(8);
  insertNode(7);
  insertNode(9);

  cout << "The values of LL before dup removal"<<endl;
   traverse();
  //delSorted();
  //delUsingLoops();
  remDup();
  cout << "The values of LL after dup removal"<<endl;
  traverse();


 
}
