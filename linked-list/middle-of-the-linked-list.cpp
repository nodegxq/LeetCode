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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* curr = head;

        // First pass: calculate length
        while (curr != 0){
            length ++;
            curr = curr->next;
        }
        
        // Compute middle index
        int middleIndex = length / 2;

        // Second pass: move to middle node
        curr = head;
        for (int i = 0; i < middleIndex; i++){
            curr = curr->next;
        }

        return curr;
    }
};