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
    int getLen(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head->next) {
            delete head;
            head = nullptr;
            return head;
        }
        int len = getLen(head);
        int idx = len - n;

        if (idx == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        ListNode* temp = head;
        ListNode* item = nullptr;
        ListNode* del = nullptr;

        for (int i = 0; i <= idx; i++) {
            if (i == idx - 1) item = temp;

            if (i == idx) 
                del = temp;
            temp = temp->next;
        }

        item->next = del->next;
        delete del;

        return head;
    }
};
