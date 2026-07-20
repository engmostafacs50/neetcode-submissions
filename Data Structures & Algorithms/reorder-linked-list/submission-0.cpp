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
   private:
    vector<ListNode*> vec;
    void fillVec(ListNode* head) {
        while (head) {
            vec.push_back(head);
            head = head->next;
        }
    }

   public:
    void reorderList(ListNode* head) { 
        if (!head || !head->next) // if lentgh = 1 or zero 
            return;
        fillVec(head); 
        int left = 0 ; 
        int right = vec.size()-1 ;
        while(left < right)
        {

            vec[left]->next = vec[right] ; 
            left++ ; 
            if(left == right)
                break ; 
            vec[right]->next = vec[left] ; 
            right-- ; 
        }
        vec[left]->next = nullptr ; 
    }
};
