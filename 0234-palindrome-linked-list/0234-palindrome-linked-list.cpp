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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* res=head;
        vector<int> ans;
        while(res!=nullptr)
        {
            ans.push_back(res->val);
            res=res->next;
        }
        int n=ans.size();
        int i=0,j=n-1;
        while(i<n && j>=0)
        {
            if(ans[i]!=ans[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};