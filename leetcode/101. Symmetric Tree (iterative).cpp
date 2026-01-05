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
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;

        stack<pair<TreeNode *, TreeNode *>> st;
        st.push({root->left, root->right});

        while (!st.empty())
        {
            auto [l, r] = st.top();
            st.pop();

            if (l == nullptr && r == nullptr)
            {
                continue;
            }

            if (l == nullptr || r == nullptr)
            {
                return false;
            }

            if (l->val != r->val)
            {
                return false;
            }

            st.push({l->left, r->right});
            st.push({l->right, r->left});
        }

        return true;
    }
};