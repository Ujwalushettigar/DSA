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
class Solution {
public:
    int sumNumbers(TreeNode* root,int ans=0) {
        if(root==nullptr)
        {
            return 0;
        }
        ans=ans*10+root->val;
        if(root->left==nullptr && root->right==nullptr)
        {
            return ans;
        }
        return sumNumbers(root->left,ans)+sumNumbers(root->right,ans);
    }
};