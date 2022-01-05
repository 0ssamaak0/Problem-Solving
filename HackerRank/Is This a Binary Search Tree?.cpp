/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/
bool checkBST(Node *root)
{
    return (auxfn(root, (2 << 30), ((2 << 30) - 1)));
}

bool auxfn(Node *root, int minval, int maxval)
{
    if (root == NULL)
    {
        return true;
    }
    return (root->data > minval && root->data < maxval && auxfn(root->left, minval, root->data) && auxfn(root->right, root->data, maxval));
}