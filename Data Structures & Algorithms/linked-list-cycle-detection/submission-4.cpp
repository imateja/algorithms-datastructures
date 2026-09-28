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
    bool hasCycle(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return false;
        bool ind=false;
        unordered_set<ListNode*> s;
        while(head!=nullptr) {
            if(s.contains(head)) {
                ind=true;
                break;
            }
            else {
                s.insert(head);
                head=head->next;
            }
        }

        return ind;

    }
};
