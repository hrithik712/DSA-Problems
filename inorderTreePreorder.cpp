#include<iostream>
using namespace std;
struct Node
{
  int data;
  Node* left;
  Node* right;
};
class Solution{
    public:
    int findPosition(int ind[], int element, int n)
    {
        for(int i=0; i<n; i++)
        {
            if(ind[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
    Node* solve(int inOrder[], int preOrder[], int &index, int inOrderStart, int inOrderEnd, int n)
    {
        // base case ...
        int ind[]; 
        if(index >= n || inOrderStart > inOrderEnd)
        {
            return NULL;
        }
        int element = preOrder[index++];
        Node* root = new Node(element);
        int position = findPosition(ind, element, n);
        // recursive calls .. 
        root->left = solve(inOrder, preOrder, index, inOrderStart,  position-1, n);
        root->right = solve(inOrder, preOrder, index, position+1, inOrderEnd, n);
        
        return root;
        
    }
    Node* buildTree(int inOrder[],int preOrder[], int n)
    {
        int preOrderIndex = 0;
        Node* ans = solve(inOrder, preOrder, preOrderIndex, 0, n-1);
        return ans;
    }
};