/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//21. Merge Two Sorted Lists 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2){return NULL;}
        if(!l1){return l2;}
        if(!l2){return l1;}
        
        
        //output list which will consists of the result 
        ListNode* l3=NULL ;
        //go through l1 and and l2 at the same time and compare the values 
        ListNode * iter1 = l1;
        ListNode * iter2 = l2;
        ListNode * head=NULL;
        
        
        
        
        while(iter1 && iter2 ){
            //you asked a question either it is all to yourself dont do this mistake 
            //in the interview -- look what is given to you -take time to think
            //if any one of the LL empties - end the while loop 
            if(iter1->val <= iter2->val){
                if(!l3){
                    head = new ListNode(iter1->val);
                    l3=head;
                    
                   
                    
                }else{
                    //we already have head 
                    ListNode * iter3 = head;
                    ListNode * temp =  new ListNode(iter1->val);
                    //we need to iterate l3 until we find right place to insert node
                    while(iter3->next !=NULL){
                        iter3 = iter3->next;  
                    }
                    //once come out of the loop know its right place for insert
                    iter3->next = temp;  
                }
                
                iter1 = iter1->next;
            }//end of the if  
                
                
            else{
                if(!l3){
                    head = new ListNode(iter2->val);
                    l3=head;
                    
                    
                }else{
                    //we already have head 
                    ListNode * iter3 = head;
                    ListNode * temp =  new ListNode(iter2->val);
                    //we need to iterate l3 until we find right place to insert node
                    while(iter3->next!=NULL){
                        iter3 = iter3->next;  
                    }
                    //once come out of the loop know its right place for insert
                    iter3->next = temp; 
                }
               
                iter2 = iter2->next;
                
            }
        }//once one of the list becomes null put the rest of the values in one list 
        //in the l3
        while(iter1){
            //we already have head 
                    ListNode * iter3 = head;
                    ListNode * temp =  new ListNode(iter1->val);
                    //we need to iterate l3 until we find right place to insert node
                    while(iter3->next){
                        iter3 = iter3->next;  
                    }
                    //once come out of the loop know its right place for insert
                    iter3->next = temp; 
            iter1 = iter1->next;
            
        }
        while(iter2) {
            //we already have head 
                    ListNode * iter3 = head;
                    ListNode * temp =  new ListNode(iter2->val);
                    //we need to iterate l3 until we find right place to insert node
                    while(iter3->next!=NULL){
                        iter3 = iter3->next;  
                    }
                    //once come out of the loop know its right place for insert
                    iter3->next = temp; 
            iter2 = iter2->next;
               
        }
        //return l3
        return l3; 

        
    } //end of the function 
};
