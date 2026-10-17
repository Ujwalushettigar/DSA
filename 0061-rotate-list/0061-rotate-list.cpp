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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* r=head;
        vector<int> nums;
        while(r!=nullptr)
        {
            nums.push_back(r->val);
            r=r->next;
        }
        int n=nums.size();
        if(n==0)
        {
            return {};
        }
        k%=n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        ListNode ans;
        ListNode* tail=&ans;
        for(int i=0;i<nums.size();i++)
        {
            tail->next=new ListNode(nums[i]);
            tail=tail->next;
        }
        return ans.next;
    }
};