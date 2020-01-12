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
//FIRST APPROACH 
    int minDist(TreeNode* root, int& min_val){
        //
        if(!root){
            return 0;
        }
        if(root && !root->left && !root->right){
            return root; 
        }
        int l = abs(root->val - root->left->val);
        int r = abs(root->val - root->right->val);
        int min = min(l,r);
        if(min<min_val){min_val=min;}
        minDist(root->left,min_val);
        minDist(root->right,min_val);
        
        return min_val;
        
    }
    
};
 /*
    int minDiffInBST(TreeNode* root) {
        //base case 
        if(!root){return 0;}
        //recursive case 
        int min_val=INT_MAX;
        minDist(root,min_val);
        return min_val;
        
    }
    int minDist(TreeNode* root, int& min_val){
        //
        if(!root){
            return 0;
        }
        if(root && !root->left && !root->right){
            return root->val; 
        }
        
        int l = abs(root->val - root->left->val);
        int r = abs(root->val - root->right->val);
        int min_temp = min(l,r);
        if(min_temp<min_val){min_val=min_temp;}
        minDist(root->left,min_val);
        minDist(root->right,min_val);
        
        
        return min_val;
        
    }*/




class Solution {
public:
    int minDiffInBST(TreeNode* root){
        vector<int> result; 
        
        
        inOrderTraversal(root,result);
        
        int mindist= INT_MAX;
        for(int i=0; i<result.size()-1; i++){
            for(int j=i+1; j<result.size(); j++){
                if(abs(result[i]-result[j]) <mindist){
                    mindist = abs(result[i]-result[j]);
                } 
            } //end of inner for             
        } //end of outer for 
        return mindist;
    } //end of the function 
    
    
//create a helper in order traversal function here       
    vector<int> inOrderTraversal(TreeNode *root, vector<int> &result){
        //base case 
        if(!root) return result; 
        //rec case 
        inOrderTraversal(root->left,result);
        result.push_back(root->val);
        inOrderTraversal(root->right,result);
        
        
        
        return result; 
    }



};
