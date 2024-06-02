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
    bool hasPathSum(TreeNode* root, int targetSum) {

        // check for root node is null or not .... 
        if(root == NULL)
        {
            return false;
        }
        if(root -> left == NULL && root -> right == NULL)
        {
            return root -> val == targetSum;
        }
        // recursively call for all the nodes of trees attached to binary tree ... 
        return hasPathSum(root->left,targetSum-root->val) || 
        hasPathSum(root->right,targetSum-root->val);
        
    }
};