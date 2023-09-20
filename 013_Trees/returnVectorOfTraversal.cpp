void inorder(TreeNode *root, vector<int> &ino)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, ino);
    ino.push_back(root->data);
    inorder(root->right, ino);
}

void preorder(TreeNode *root, vector<int> &preo)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    preo.push_back(root->data);
    preorder(root->left, preo);
    preorder(root->right, preo);
}

void postorder(TreeNode *root, vector<int> &posto)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left, posto);
    postorder(root->right, posto);
    posto.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root) //return type ----see
{
    // Write your code here.
    vector<vector<int>> ans;

    vector<int> ino, preo, posto;

    inorder(root, ino);
    ans.push_back(ino);

    preorder(root, preo);
    ans.push_back(preo);

    postorder(root, posto);
    ans.push_back(posto);

    return ans;
}
