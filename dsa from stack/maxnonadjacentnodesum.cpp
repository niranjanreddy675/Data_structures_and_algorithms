// Given the root of a binary tree with integer values.
// Your task is to select a subset of nodes such that the sum of their values is maximized,
// with the condition that no two selected nodes are directly connected that is,
// if a node is included in the subset, neither its parent nor its children can be included.class Solution
{

    pair<int, int> solve(Node *root)
    {
        if (root == NULL)
        {
            pair<int, int> p = make_pair(0, 0);
            return p;
        }

        pair<int, int> left = solve(root->left);
        pair<int, int> right = solve(root->right);

        pair<int, int> ans;

        ans.first = root->data + left.second + right.second;

        ans.second = max(left.first, left.second) + max(right.first, right.second);
        return ans;
    }

public:
    int getMaxSum(Node *root)
    {

        pair<int, int> ans = solve(root);
        return max(ans.first, ans.second);
    }
};