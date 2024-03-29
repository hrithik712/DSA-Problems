class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head-> next == NULL)
        {
            return head;
        }
        ListNode* prev  = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr != NULL)
        {
            forward = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
        
    }
};

// Time COmplexity - O(N) ...........
// Space Complecity - O(1)...................