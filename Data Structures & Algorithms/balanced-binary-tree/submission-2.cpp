/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
        return helper(root, 0) != -1;
    }

    int helper(TreeNode* root, int height) {
        
        if(!root)
            return height; 

        int a = helper(root->left, height+1);
        int b = helper(root->right, height+1);

        if(a == -1 || b == -1)
            return -1;

        return abs(a - b) <= 1 ?  max(a,b) : -1;      
    }
};
