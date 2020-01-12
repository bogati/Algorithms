/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//reference :
//https://leetcode.com/problems/invert-binary-tree/discuss/62731/Recursive-and-non-recursive-C%2B%2B-both-4ms 

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if (root) {
        invertTree(root->left);
        invertTree(root->right);
        std::swap(root->left, root->right);
    }
    return root;
    }
        
  
};


//iterative code 
    TreeNode* invertTree(TreeNode* root){
        if(root){
            stack<TreeNode*> stk; 
            //push the the root in stack 
            stk.push(root);
            
            while(!stk.empty()){
                //while stack is not empty keep pushing the values in stack 
                TreeNode* temp = stk.top(); 
                stk.pop();
                
                if(temp){
                    stk.push(temp->left); 
                    stk.push(temp->right);
                    std::swap(temp->left, temp->right);
                    
                }
                
            } //end of the while loop 
            
        } 
        return root; 
    } //end of the iterative code !!!! 
