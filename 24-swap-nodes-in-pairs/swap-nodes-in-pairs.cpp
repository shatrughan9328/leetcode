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

    ListNode* swapPairs(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {

            ListNode* first = curr;
            ListNode* second = curr->next;

            // Swap
            first->next = second->next;
            second->next = first;

            // Head update
            if (prev == NULL)
                head = second;
            else
                prev->next = second;

            // Move forward
            prev = first;
            curr = first->next;
        }

        return head;
    }

};