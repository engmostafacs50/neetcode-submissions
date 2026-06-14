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
        unordered_set<ListNode*>S ; 
        ListNode *h = head ; 
        while(h!=nullptr)
        {
            if(S.find(h) != S.end())
            {
                return 1 ; 
            }

            S.insert(h) ;
            h = h->next;
        }
        return 0 ; 
    }
};
