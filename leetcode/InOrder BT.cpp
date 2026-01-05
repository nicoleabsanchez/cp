#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;

    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

int main()
{
    // Crear árbol
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(8);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(1);
    root->right->right->left = new TreeNode(6);

    // Ejecutar
    cout << "In-Order: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
