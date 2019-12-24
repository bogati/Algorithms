//199. Binary Tree Right Side View
/*
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result; 
        if(!root) return result; 
        
        queue <TreeNode*> q ; 
        q.push(root);
        
        while(!q.empty()){
            int size = q.size(); 
            for(int i=0; i<size; i++){
                TreeNode* current = q.front(); 
                if(i==size-1){
                    result.push_back(current->val);
                }
                if(current->left != NULL){
                    q.push(current->left);
                }
                if(current->right != NULL){
                    q.push(current->right);
                }
            } //end of the for loop 
        } //end of the while 
        
        return result; 
        
    } //end of the function 
};

