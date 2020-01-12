/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; 
        //create a stack 
        stack<TreeNode*> stk; 
        //taverse the root until found the left most node
        stk.push(root);
        
        while(!stk.empty()){
            
            TreeNode * temp_val = stk.top();
            stk.pop();
            TreeNode * iter = temp_val; 
            
            while(iter){
            //start pushing on stack as you traverse left
            stk.push(iter);
            iter = iter->left;
            } //when loop ends stack top will have left most node
            if(temp_val){
                result.push_back(temp_val->val);
            }
            if(temp_val->left){
                //push the value to stack 
                stk.push(temp_val->left); 
                //result.push_back(temp_val->val);
            }
            
            if(temp_val->right){
                //push the value to stack 
                stk.push(temp_val->right);   
            }
            
        } //end of outer while 
        return result; 
        
    } //end of the function 
    
    //ORIGINAL APPROACH ------------------
    
    */




class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> result; 
        stack<TreeNode*> stk ;
        addLeftNode(stk,root); 
        //once we hit the left most , we will check
        //its parent node and see if has right node
        //if right node exists do the same process
        //which is keep adding left node to stack
        while(!stk.empty()){
            TreeNode* curr_val = stk.top(); 
            stk.pop();
            
            result.push_back(curr_val->val);
            if(curr_val->right){
                //if the current node at stack has right
                addLeftNode(stk,curr_val->right);
            }
        }
        return result;
        
        
    } //end of the function 
    
    //HELPER FUNCTION TO ADD LEFT NODE TO STACK 
    void addLeftNode(stack<TreeNode*>&stk, TreeNode* n){
        
        while(n){
            //keep adding the node until we reach lefmost 
            stk.push(n);
            n=n->left;
        }
        //at the end of while we will have inserted
        //the left most node of the tree/sub tree 
        
    }
};
    
    
    
    
    
    















    
    
    
    
    
    
    
    
    
    
