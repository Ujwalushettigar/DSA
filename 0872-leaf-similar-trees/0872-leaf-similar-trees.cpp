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
    void trav(TreeNode* r1,vector<int>& res)
    {
        if(r1==nullptr)
        {
            return;
        }
        if(r1->left==nullptr && r1->right==nullptr)
        {
            res.push_back(r1->val);
            return;
        }
        trav(r1->left,res);
        trav(r1->right,res);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        vector<int> ans;
        trav(root1,res);
        trav(root2,ans);
        return ans==res;
    }
};