void inorder(TreeNode* root, vector<int> &nodes)
{
    if(!root)
    return;

    inorder(root->left, nodes);
    nodes.push_back(root->val);
    inorder(root->right, nodes);
}
 bool isBST(Node* root) {
        // base case // 
        if(root == NULL){
            return 0;
        }
        vector<int> nodes;
        inorder(root, nodes);
        
        set<int> s(nodes.begin(), nodes.end());
        
        if(s.size() != nodes.size())
        {
            return false;
        }
        for(int i=0; i<nodes.size()-1; i++)
        {
            if(nodes[i] > nodes[i+1])
            return false;
        }
        return true;
    }
};
