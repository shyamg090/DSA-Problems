class Solution
{

private:
    int height(TreeNode *root)
    {
        // base case
        if (root == NULL)
        {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        if (left == -1 || right == -1)
        {
            return -1; // left has no node right has no node
        }

        if (abs(left - right) > 1)
        {
            return -1; // left node right node diffrence is greater than 1
        }

        int maxheight = max(left, right) + 1;
        return maxheight;
    }

public:
    bool isBalanced(TreeNode *root)
    {

        int height1 = height(root);

        if (height1 == -1)
        {
            return false;
        }

        return true;
    }
};

/* my approach 172/200 test cases

class Solution {

private:
    int heightLeft(TreeNode* root){
        //base case
        if( root == NULL){
            return 0;
        }

        int left  = heightLeft(root->left) + 1;

        return left;
    }

    int heightRight(TreeNode* root){
        //base case
        if( root == NULL){
            return 0;
        }

        int right  = heightRight(root->right) + 1;

        return right;
    }
public:
    bool isBalanced(TreeNode* root) {

        if(root == NULL){
            return true;
        }

        int left = heightLeft(root);
        int right = heightRight(root);

        if( left+1 == right ){
            return true;
        }

        return false;
    }
};

*/