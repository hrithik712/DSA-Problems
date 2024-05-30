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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    } 
private:
    TreeNode* sortedArrayToBSTHelper(vector<int>& nums, int start, int end) {
        // base case ..
        // if the start is greater than end .. 
        if(start > end)
        return NULL;
        // now finding the middle element in the array .. 
        int mid = start+(end - start)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        // now check for the left side of tree  .. 
        root -> left = sortedArrayToBSTHelper(nums, start, mid -1);
        // for right .. 
        root -> right = sortedArrayToBSTHelper(nums, mid + 1, end);

        // else root par return karna hai ..
        return root;

    }
};