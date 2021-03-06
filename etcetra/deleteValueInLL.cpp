//https://codeinterview.io/GZFEXEXWOR 
#include <iostream>
using namespace std;

struct node
{
  int val; 
  node * next; 
};
node * head = NULL; 

void createLL(int val)
{
  //if the first value is being passed 
  if (head==NULL){
    head = new node();
    head->val = val; 
    head->next = NULL;
  }
  //if head is not equal to NULL, add new node at the end of LL
  node * temp = head;
  while(temp->next !=NULL){
    temp = temp->next; 
  }
  //we have last node on the temp right now 
  temp->next = new node(); 
  temp->next->val = val;
  temp->next->next = NULL; 
  
  
} //end of the createLL

//misleading function name 
void remDuplicates(int val){
  /*
  handling the cases where first val in ll is null
  middle val in ll is null
  and the last value in the ll is null
  */
  node * temp = head; 
  cout <<"The head value before is"<<head->val<<endl;;
  if(temp->val == val){
    
    while(temp->val == val){
      temp = temp->next;
    }
    cout <<"temp value after while is"<<temp->val<<endl;
    head = temp; 
    cout << "head value after first dup removed" <<head->val<<endl;
  }
  //we have our temp with accurate head here now
  //reassign the head to temp as we might get new head 
  temp = head;
  node * prev = NULL; 
  //while temp->next !=NULL versus temp !=NULL
  while(temp != NULL){
    if(temp->val != val )
    {
      prev = temp ;
      temp = temp->next; 
      
    }else{
      //the current node has the value equal to val 
      prev->next = temp->next ;
      temp = temp->next; 

    }
    
    
  } //end of the while 
  
} //end of the remove duplicates function 

int main() {
  createLL(3);
  createLL(5);
  createLL(6);
  createLL(3);
  createLL(3);
  createLL(4);
  createLL(3);
  /*
  while(head->next !=NULL){
    cout << head->val <<endl;
    head = head->next;
  }
  cout << "-----------------"<<endl;
  while(head !=NULL){
    cout << head->val <<endl;
    head = head->next;
  }
  */
  //cout <<"head value in Main is"<<head->val<<endl;
  remDuplicates(3);
  
  while(head !=NULL){
    cout << head->val <<endl;
    head = head->next;
  }
  
  
	return 0;
}
