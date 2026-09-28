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
    void reorderList(ListNode* head) {
        if(head==nullptr) return;
        if(head->next==nullptr) return;

        ListNode* fast=head, *slow = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        //slow pointer is the start of the 2nd half which we need to reverse
        //reversal code
        ListNode* curr = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(curr!=nullptr) {
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        //prev is now the last elem in original list, but the start of our reversed list

        ListNode* first = head;
        ListNode* second = prev;

        while(second!=nullptr) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }


    }
};
