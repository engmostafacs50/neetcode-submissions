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
    bool isPalindrome(ListNode* head) {
        stack<int>P ; 
        ListNode* curr = head ;
        while(curr!=nullptr)
        {
            P.push(curr->val) ; 
            curr = curr->next ; 
        }
        bool flag = 1 ; 
        int S = P.size();
        for(int i = 0 ; i < S/2 ; i++ )
        {
            if(P.top() != head->val)
            {
                flag = 0 ; 
                break ;  
            }
            P.pop() ;
            head = head->next  ;
        }
        if(flag) return true ; 
        else return false ; 
    }
};