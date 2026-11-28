/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* func(vector<int>& nums,int l,int r)
    {
        if(l>r)
        {
            return nullptr;
        }
        int mid=(l+r)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = func(nums,l,mid-1);
        node->right = func(nums,mid+1,r);
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> res;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        return func(res,0,res.size()-1);
    }
};