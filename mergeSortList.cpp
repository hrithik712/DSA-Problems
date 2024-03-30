#include <bits/stdc++.h> 
/**********************************************************************

    Following is the class structure of the Node class for reference:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

********************************************************************/
// Applyting Tortoise-Hare approach to find the mid of linked- list ...
Node* findMid(Node* head)
{
    Node* slow= head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

// function to merge left and right linked list....
Node* merge(Node* left, Node* right)
{
    if(left == NULL)
    return right;
    if(right == NULL)
    return left;

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL )
    {
        if(left -> data < right -> data)
        {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else
        {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    while(left != NULL)
    {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    while(right != NULL)
    {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    ans = ans -> next;
    return ans;
}

Node *sortLL(Node *head){
   // base case ..
   if(head == NULL || head -> next == NULL)
   return head;

   // break linked list into two halfs, after finding the mid ...
   Node* mid = findMid(head);
   Node* left = head;
   Node* right = mid -> next;
   mid -> next = NULL;

   // recursive calls to sort both the values........
   left = sortLL(left);
   right = sortLL(right);

   // Now, merge both the parts....
   Node* result = merge(left, right);
   
   return result;
}