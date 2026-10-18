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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* ans=head;
        while(ans!=nullptr)
        {
            ans=ans->next;
            l++;
        }
        int diff=l-n;
        ListNode* go=head;
        if(diff==0)
        {
            return head->next;
        }
        while(diff>1) 
        {
            go=go->next;
            diff--;
        }
        go->next=go->next->next;
        return head;
    }
};