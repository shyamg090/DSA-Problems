//  when node to be deleted is given as an input

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // cout<<"val :"<<node->val;
        // copy the next val 4,5,1,9 --> 4,1,1,9
        node->val = node->next->val; // 5 is replaced with 1
        ListNode *temp = node->next; // temp points to 1 at pos 2
        node->next = temp->next;     // connect the 1 to 9

        temp->next = NULL; // remove pointer
        delete (temp);     // free the space
    }
};