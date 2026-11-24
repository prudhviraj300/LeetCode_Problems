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

    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* rev = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return rev;
    }

    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        prev->next = nullptr;

        slow = reverse(slow);
        int ans = 0;
        while(slow != nullptr ){
            int a = head->val;
            int b = slow->val;

            head = head->next;
            slow = slow->next;

            ans = max(ans, (a + b));

        }

        return ans;
    }
};