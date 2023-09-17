Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *merge(Node *left, Node *right)
{
    if (left == NULL)
    {
        return right;
    }

    if (right == NULL)
    {
        return left;
    }

    Node *ans = new Node(-1); // dummy node
    Node *temp = ans;         // node to traverse

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

Node *sortLL(Node *head)
{
    // Write your code here.

    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *mid = middle(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left = sortLL(left);
    right = sortLL(right);

    Node *ans = merge(left, right);

    return ans;
}