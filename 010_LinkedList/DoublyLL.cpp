#include <iostream>
using namespace std;

class Node
{

public:
    int data;   // data of int type
    Node *prev;
    Node *next; // next of node* type (pointer of node type)

    // automatically initialized when object is created
    Node(int data)
    {                      // constructor with data paramter
        this->data = data; // assign the data(red/ parameter) to the object data or current object data
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL && this->prev != NULL)
        {
            this->next = NULL;
            this->prev = NULL;
        }
        cout << "memeory freed : " << value << endl;
    }

}; // ; is a must

// head is points to first adress same as arr passing in arrays when you pass arr
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    temp->prev = head->next;
    head = temp; // head must be initial adress of temp [changing the head to current starting node]
}

void insertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail->next;
    // tail = tail->next; //or
    tail = temp;
}

void insertAtPosition(Node *tail, Node *head, int position, int d)
{
    // check if the given position is beginning
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // point temp to head initially
    Node *temp = head;
    int count = 0;

    // traverse temp to the given position
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // if temp  reaches end  check temp-next = null
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // inserting at position in middle
    // create a new node to insert at middle
    Node *insertMid = new Node(d);
    insertMid->next = temp->next; // to right node
    temp->next = insertMid;
    insertMid->prev = temp; // from left to insertmid
}

void deleteAtPosition(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        // head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next->prev = prev->next;
        curr->next = NULL;
        delete curr;
    }
}

// to print the values of linked List
void printLL(Node *&head)
{
    // create a node temp that stores head // this stores head
    Node *temp = head; // copy the temp represents the head and traverse
    // head remains the same but temp keeps moving forward
    while (temp != NULL)
    {
        cout << temp->data << " "; // copy of the node hence can acess data
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *nodeObj1 = new Node(200); // passing arguments -- parameterized constructor --dynamic hence use *
    // cout<<"data sent from current object :" << nodeObj1 -> data<<endl; //has 30
    // cout<<"adress of next node :" << nodeObj1 -> next << endl; //has next adress stored or NULL

    cout << "-------insert at head----------" << endl;
    // create a new node head
    Node *head = nodeObj1;
    // -----------------------------------------------------------------------------------
    // printLL(head); //prints 20 as it is passsed
    // insertAtHead(head, 12);
    // printLL(head); //inserts 12 -> 20 then prints 12 20
    // insertAtHead(head, 15);
    // printLL(head); // inserts 15 -> 12 -> 20 then prints 15 12 20

    cout << endl;
    //      << "-----------Insert to tail----------" << endl;
    // create a new tail node
    Node *tail = nodeObj1;

    printLL(head); // prints 200 as it is passsed
    insertAtTail(tail, 12);
    printLL(head); // inserts 200 -> 12 then prints 12 20
    insertAtTail(tail, 15);
    printLL(head); // inserts 200 -> 12 -> 15 then prints 15 12 20
    insertAtTail(tail, 18);
    printLL(head);

    // -----------------------------------------------------------------------------------
    int position, data;
    // cin >> position >> data;
    // insertAtPosition(tail, head, position, data);
    // printLL(head);
    // cout << endl;


    cin >> position;
    deleteAtPosition(position, head);
    printLL(head);

    return 0;
}