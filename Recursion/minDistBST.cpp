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
    int minDiffInBST(TreeNode* root) {
        
    vector<int> vec; 
    in_order(root,vec);
    int mini = INT_MAX;
    
    for(int i=1; i<vec.size();i++){
        mini = min(mini,(abs(vec[i]-vec[i-1])) );
    }
    
    return mini;
        
    }
    void visit(TreeNode *root,vector<int>&vec){
        vec.push_back(root->val);
    }
    void in_order(TreeNode* root,vector<int>&vec){
        if(root ==NULL) return;
        
        in_order(root->left,vec);
        visit(root,vec);
        in_order(root->right,vec);
        
    }
    
   
};
