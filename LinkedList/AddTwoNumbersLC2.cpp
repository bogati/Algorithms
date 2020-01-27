/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       /* ListNode * temp1 = l1;
        ListNode * temp2 = l2; 
        
        ListNode * headptr = NULL ; 
        
        string s1= "";
        string s2= "";
        
        while(temp1!=NULL){
        //we did not do temp1->next != NULL because we want to catch the value of last node
            //convert int to string first 
            s1 = s1 + to_string(temp1->val); 
            temp1= temp1->next; 
            
        }
        while(temp2!=NULL){
            //convert int to string first 
            s2 = s2 + to_string(temp2->val); 
            temp2= temp2->next; 
            
        }
        //reverse two strings and add 
        
        for(int i=0; i<s1.length()/2; i++){
            char temp = s1[i];
            s1[i]=s1[s1.length()-1-i];
            s1[s1.length()-1-i]= temp;
        }
          for(int i=0; i<s2.length()/2; i++){
             char temp = s2[i];
            s2[i]=s2[s2.length()-1-i];
            s2[s2.length()-1-i] = temp;
              
        }
        
        string s3 = "";
        long long int sum = stoll(s1) + stoll(s2);
        cout <<"s1 is "<<s1<<endl;
        cout <<"s2 is "<<s2<<endl;
        cout <<"sum is "<<sum<<endl;
        
        s3 = s3 + to_string(sum); 
        cout <<"string 3 is "<<s3<<endl;
        cout << "last val in s3 is "<<s3[s3.length()-1]<<endl;
        
        for(int i= s3.length()-1; i>=0;  i--){
            //add to the l3 - linked list here
            //create the node first 
            //if linked list 3 is empty 
            if(headptr==NULL){
                //make l3 as head of linked list 3 
            cout << "value of s3[i] is "<<s3[i]<<endl;
            
            headptr = new ListNode(((int)s3[i]-48)); 
           
            cout <<"entered in head  and head value is "<< headptr->val<<endl; 
            }
            else{
                //if linked list has some elements
                ListNode * newnode = new ListNode((int)s3[i]-48); 
                ListNode * temp = headptr;
                while(temp->next!=NULL){
                    temp = temp->next;
                }//now once we get out of while loop we see the ll is null, so add element
        
                temp->next = newnode;
                
            } //end of the else 
            
            
        }
        return headptr;
        
    }
    */
    // 1560 / 1563 test cases passed with this code so far 
    
    //create a linked list on which you will return the values 
    ListNode * l3_head = NULL;
    ListNode * l3 = l3_head; 
    ListNode * temp1 = l1;
    ListNode * temp2 = l2; 
    int carry =0 ;
    
    while(temp1!=NULL && temp2!=NULL){
        //we calculate sum at each iteration , so do we with carry
        
        int sum = carry + temp1->val + temp2->val;
        carry = sum/10; 
        
        if(l3_head==NULL){
            //extracting the digit at oneth place 
            l3_head = new ListNode(sum%10);
            l3 = l3_head;
            
        }
        else{
            //update the head pointer so we know where to insert the element 
            
            l3->next = new ListNode(sum%10); 
            
            //update l3 pointer pointing to tail 
            l3 = l3->next ;
        }
        
        temp1= temp1->next; 
        temp2= temp2->next;
        
    } 
    //come out of the while loop when one of the linked list is empty 
    while(temp1!=NULL){
        int sum = carry + temp1->val;
        carry=sum/10;
        l3->next = new ListNode(sum%10); 
        l3 = l3->next;
        temp1= temp1->next; 

    }
    while(temp2!=NULL){
        int sum = carry + temp2->val;
        carry=sum/10;
        l3->next = new ListNode(sum%10); 
        l3 = l3->next;
        temp2= temp2->next; 

    }
        //edge case 
        
    if(carry>0){
        //when the second last sum will create the carry 
        l3->next = new ListNode(carry);
        l3 = l3->next; 
    }
        
    return l3_head; 
    }//end of the function   
          
};
