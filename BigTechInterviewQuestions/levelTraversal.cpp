//102 Binary Tree Level Order Traversal 
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> resultset; 
        if(root==NULL){return resultset;}
        
        queue <TreeNode*> q; 
        //cout<<"the root value is"<<root->val<<endl;
        q.push(root); 
        //cout <<"size of queue before while"<<q.size()<<endl; 
        
        while(!q.empty()){
            int size = q.size();
            vector<int> curr_level ; 
            for(int i=0; i<size; i++){
                TreeNode* current = q.front(); 
                q.pop();
                curr_level.push_back(current->val);
                if(current->left != NULL){
                    q.push(current->left);
                }
                if(current->right != NULL){
                    q.push(current->right);
                } 
          
            }//end of the for loop 
              resultset.push_back(curr_level);
            curr_level.clear();
            
            
        } //end of the while loop 
        return resultset;
        
    } // end of the function 
};
