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
    int avlTree(TreeNode *root)
    {
        // check that avl tree contains the null node .... 
        if(root == nullptr  )
        {
            return 0;
        }
        // check the height of left subtrees ... 
        // if not found return -1 ... 
        int left_height = avlTree (root -> left);
        if (left_height == -1)
        return -1;
        
        // same applies for the right subtrees....
        int right_height = avlTree(root -> right);        
        if(right_height == -1 )
        return -1;

        //now check for both the height left and right subtrees.....

        if(abs(right_height - left_height) > 1) 
        return -1;

        // check for the max value of left_height and right height of 
        // avl trees.....................
        return max(++right_height, ++left_height);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr )
         return true;
         if(avlTree(root) == -1 )
         return false;
         return true;
        
    }
};