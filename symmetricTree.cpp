/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {

        if (root == NULL)
            return true;
        return isSymmetricHelper(root->left, root->right);
    }

    bool isSymmetricHelper(TreeNode* leftNode, TreeNode* rightNode) {
        // check for the leftnode and rightnode of tree is null or not ... 
        if (leftNode == NULL && rightNode == NULL)
            return true;
            // check for either leftnode and rightnode is true in treee.....
        if (leftNode == NULL || rightNode == NULL)
            return false;
            /// leftnode value is not equal to right node value then 
            // false return karna hai ... 
        if (leftNode->val != rightNode->val)
            return false;
            // aur left m check karna hai aur right m bhi .. 
        return isSymmetricHelper(leftNode->left, rightNode->right) &&
               isSymmetricHelper(leftNode->right, rightNode->left);
    }
};