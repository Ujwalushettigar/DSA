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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        vector<int> res;
        while(temp!=nullptr)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        int n=res.size();
        int sum=0,m=0;
        for(int i=0;i<(n/2);i++)
        {
            sum=res[i]+res[n-i-1];
            m=max(m,sum);
        }
        return m;
    }
};