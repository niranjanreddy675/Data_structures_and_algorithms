class Solution
{

    void solve(Node *root, int sum, int &maxsum, int len, int &maxlen)
    {

        if (root == NULL)
        {
            if (len > maxlen)
            {
                maxlen = len;
                maxsum = sum;
            }
            else if (len == maxlen)
            {
                maxsum = max(sum, maxsum);
            }
            return;
        }

        sum = sum + root->data;

        solve(root->left, sum, maxsum, len + 1, maxlen);
        solve(root->right, sum, maxsum, len + 1, maxlen);
    }

public:
    int sumOfLongRootToLeafPath(Node *root)
    {

        int len = 0;
        int maxlen = 0;

        int sum = 0;
        int max_sum = INT_MIN;

        solve(root, sum, max_sum, len, maxlen);
        return max_sum;
    }
};