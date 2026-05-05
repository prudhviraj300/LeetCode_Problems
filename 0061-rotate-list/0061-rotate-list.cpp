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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* dummy = head;
        int len = 1;
        if(!head){
            return nullptr;
        }
        while(head->next != nullptr){
            head = head->next;
            len++;
        }

        k = k % len;

        int pos = len - k;

        if(pos == 0){
            return dummy;
        }
        ListNode* temp = dummy;
        pos = pos-1;
        while(pos--){
            temp = temp->next;
        }
        
        head->next = dummy;
        dummy = temp->next;
        temp->next = nullptr;

        return dummy;
        
    }
};