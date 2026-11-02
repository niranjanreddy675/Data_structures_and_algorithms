class Solution
{

    Node *solve(Node *root, int &k, int node)
    {

        if (root == NULL)
        {
            return NULL;
        }

        if (root->data == node)
        {
            return root;
        }

        Node *left = solve(root->left, k, node);
        Node *right = solve(root->right, k, node);

        if (left != NULL && right == NULL)
        {
            k--;
            if (k <= 0)
            {
                k = INT_MAX;
                return root;
            }
            return left;
        }
        else if (left == NULL && right != NULL)
        {
            k--;
            if (k <= 0)
            {
                k = INT_MAX;
                return root;
            }
            return right;
        }
        return NULL;
    }

public:
    int kthAncestor(Node *root, int k, int node)
    {

        Node *ans = solve(root, k, node);
        if (ans == NULL || ans->data == node)
        {
            return -1;
        }
        else
        {
            return ans->data;
        }
    }
};



//app-2
class Solution
{

    void solve(Node *root, int k, int node, vector<int> ans, int &answ)
    {

        if (root == NULL)
        {
            return;
        }

        ans.push_back(root->data);

        if (root->data == node)
        {

            if (k >= ans.size())
            {
                answ = -1;
                return;
            }

            answ = ans[ans.size() - k - 1];
            return;
        }

        solve(root->left, k, node, ans, answ);
        solve(root->right, k, node, ans, answ);
    }

public:
    int kthAncestor(Node *root, int k, int node)
    {
        int answ = -1;
        vector<int> ans;
        solve(root, k, node, ans, answ);

        return answ;
    }
};