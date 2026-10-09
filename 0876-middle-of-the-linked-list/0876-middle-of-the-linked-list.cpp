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
    ListNode* middleNode(ListNode* head) {
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(fast!=nullptr && fast->next!=nullptr)
        // {
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // return slow;

        int len=0;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        int mid=len/2;
        ListNode* d=head;
        for(int i=0;i<mid;i++)
        {
            d=d->next;
        }
        return d;
    }
};