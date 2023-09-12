/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    void reverse(ListNode *&head, ListNode *curr, ListNode *prev)
    {
        if (curr == NULL)
        {
            head = prev;
            return;
        }

        ListNode *forward = curr->next; // assign the new forward node
        reverse(head, forward, curr);   // this will recursively call the reverse fun
        curr->next = prev;              // curr->next = prev to connect the reversed node
    }

public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        reverse(head, curr, prev);
        return head;
    }
};

/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }
};

*/