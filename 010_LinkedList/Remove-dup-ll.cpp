// ------------------------------------ O(n) ----------------------------------------
//using maps

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    unordered_map<int, bool> visited; // use unordered map else TLE error

    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if (visited[curr->data] != true)
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
        else
        {
            prev->next = curr->next;
            // Node* del = curr;
            // del->next = NULL;
            // delete(del);
            curr = prev->next;
        }
    }

    return head;
}

//------------------------------------- O(n*n) ----------------------------------------
// using 2 while loop --- method correct bu tgives TLE 


// Node *removeDuplicates(Node *head)
// {
//     if (head == NULL)
//     {
//         return head;
//     }
//     // Write your code here
//     Node *curr = head;

//     while (curr != NULL)
//     {
//         Node *temp = curr->next;
//         while (temp != NULL)
//         {
//             if (temp->data == curr->data)
//             {
//                 Node *del = temp->next;
//                 temp->data = del->data;
//                 temp->next = del->next;
//                 del->next = NULL;
//                 delete (del);
//                 // temp = temp->next;
//             }
//             else
//             {
//                 temp = temp->next;
//             }
//         }
//         curr = curr->next;
//     }

//     return head;
// }