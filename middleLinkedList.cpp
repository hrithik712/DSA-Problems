#include<iostream>
using namespace std;
class Solution {
public:
    int getLength(ListNode* head)
    {
        int len = 0;
        while(head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {

        // use of getlength function to find the length of linked list....
        int len = getLength(head);
        // finding the miidle element of linked list...
        int ans = (len/2);
        // make temp to point on head node ...
        ListNode* temp = head;

        int count = 0;
        while(count < ans)
        {
            temp = temp-> next;
            count++;
        }
        return temp;
    }
};