class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        head = reverseList(head);

        ListNode* temp = head;
        ListNode* item = nullptr;

        for (int i = 1; i < n; i++)
        {
            item = temp;
            temp = temp->next;
        }

        if (item == nullptr)
        {
            head = head->next;
            delete temp;
        }
        else
        {
            item->next = temp->next;
            delete temp;
        }

        head = reverseList(head);

        return head;
    }
};