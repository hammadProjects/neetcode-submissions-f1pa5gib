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
        unordered_map<ListNode*, bool> seen;
        ListNode* temp = head;

        while(temp) {
            if(seen.count(temp) == 1) {
                return true;
            }

            seen[temp] = true;
            temp = temp->next;
        }

        return false;
    }
};
