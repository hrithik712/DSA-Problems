#include <bits/stdc++.h> 
using namespace std;
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
Node *removeDuplicates(Node *head)
{
    Node *curr = head;
            Node *prev = NULL;

            if (curr == NULL)
                return NULL;

            map<Node*, bool> visited;

            while (curr != NULL)
            {

                if (visited[curr->data])
                {
                    Node *temp = curr;
                    curr = curr->next;
                    delete (temp);
                    prev->next = curr;
                }
                else
                {
                    visited[curr->data] = true;
                    prev = curr;
                    curr = curr->next;
                }
                
            }
            return head;
}