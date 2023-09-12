Node *firstNode(Node *head)
{
    //    Write your code here.

    Node *slow = head;
    Node *fast = head;
    Node *ans = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next; // move 2 steps
        slow = slow->next;       // move 1 step
        if (fast == slow)
        {               // finding intersection
            ans = slow; // assigning the intersection to ans
            break;      // come out of while loop
        }
    }
    // either while loop comes out of fast = NULL or ans = slow
    if (ans == NULL)
    { // checking for if fast = null then ans=null remains same
        return NULL;
    }
    // if above executes then it returns null else
    slow = head;
    while (slow != ans)
    {
        slow = slow->next;
        ans = ans->next;
    } // when this ans or slow comes ot of loop then ans == slow

    return slow;
}

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/