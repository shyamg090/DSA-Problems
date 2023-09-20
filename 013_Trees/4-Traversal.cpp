#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node *left;
        node *right;

    node(int data){
        //to create a new node when [ new node(data) ] is used
        this->data = data; //store the data
        this->left = NULL; //point the left to null
        this->right = NULL; //point thee right to null
    }
};

node *builtTree(node *root)
{
    // node *  we must the root node of the tree ans root is initially NULL

    cout << "enter the data: " << endl;

    int d; //not the obj data
    cin >> d;

    // create a new node using the data
    root = new node(d);

    // base case to stop taking the input
    if (d == -1)
    {
        return NULL; // end of the node
    }

    // root has a data, root->left , root->right

    cout << "enter for the left or -1 to stop" << d << endl;
    root->left = builtTree(root->left); // pass the left node for recursion
    // it will create a new node with data , left->left, left->right

    cout << "enter for the right or -1 to stop" << d << endl;
    root->right = builtTree(root->right); // pass the right node for recursion
    // it will create a new node with data , right->left, right->right

    return root; //return a node* type
}

void levelOrderTraversal(node* root){
    //create a queue of node* type
    queue<node *> q;
    q.push(root); //initial node
    q.push(NULL); //after every level a seperator

    while( !q.empty() ){
        node *temp = q.front(); //temp points to front even after it is poped
        q.pop(); //now front points to next in queue

        if( temp == NULL ){ //  temp == NULL  not temp->data bcz *queue contains nodes* not data
            cout << endl;
            if( !q.empty() ){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " "; //now the queue has NULL in front

            if( temp->left ){
                q.push(temp->left);
            }

            if( temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    //base case when to stop
    if(root == NULL){
        return;
    }

    inorder(root->left); // L
    cout << root->data << " "; // N (in)
    inorder(root->right); // R
}

void preorder(node *root)
{
    // base case when to stop
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " "; // N (pre)
    preorder(root->left);       // L
    preorder(root->right);      // R
}

void postorder(node *root)
{
    // base case when to stop
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);     // L
    postorder(root->right);    // R
    cout << root->data << " "; // N (post)
}

int main(){
    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = builtTree(root);

    cout << "level order trversal using queue " << endl;
    levelOrderTraversal(root);

    cout << endl;
    cout << "inorder traversal " << endl;
    inorder(root);

    cout << endl;
    cout << "preorder traversal " << endl;
    preorder(root);

    cout << endl;
    cout << "postorder traversal " << endl;
    postorder(root);

    return 0;
}