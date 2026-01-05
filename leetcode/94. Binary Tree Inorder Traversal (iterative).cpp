/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> ans;
    stack<TreeNode *> st;

    vector<int> inorderTraversal(TreeNode *root)
    {
        TreeNode *curr = root;

        while (curr != nullptr || !st.empty())
        {
            while (curr != nullptr)
            {
                // left
                st.push(curr);
                curr = curr->left;
            }
            // val
            curr = st.top(); // obtiene el valor
            st.pop();        // lo elimina de la stack
            ans.push_back(curr->val);
            // right
            curr = curr->right;
        }
        return ans;
    }
};