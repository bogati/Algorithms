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
    vector<string> binaryTreePaths(TreeNode* root) {
        //base case 
        //when does the function should end ?
        //when we reach the leaf, the path is complete
        //insert in the paths once path is complete 
        
        //call function here with root as start node
        vector<string> paths;
        addPaths(root,"",paths);
        return paths;      
    }    
    //helper function that has paths 
    void addPaths(TreeNode* root,string str, vector<string>& paths){
        if(!root){return;}
        str = str+ to_string(root->val);  
            
        //if leaf is found add the string to the paths
        if(!root->left && !root->right){
            paths.push_back(str);
            return;
        }
        
        if(root->left){
            addPaths(root->left,str+"->",paths);
        }
         if(root->right){
            addPaths(root->right,str+"->",paths);
        }
        
        
    } //end of the addPaths function 
    
}; //end of Solution class 
