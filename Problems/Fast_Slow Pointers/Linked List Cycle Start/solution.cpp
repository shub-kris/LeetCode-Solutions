/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;

        bool cycle_detected = false;
        ListNode *slow = head, *fast = head;
        while(slow && fast){
            slow = slow->next;
            fast = fast->next ? fast->next->next : NULL;
            if(slow == fast){
                cycle_detected = true;
                break;
            }
        }

        if(!cycle_detected) return NULL;

        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};