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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL) return NULL;

        ListNode* cur = head;
        int size = 0;
        while(cur!=NULL) {
            cur = cur->next;
            size++;
        } 

        if (size == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode* temp = head;
        int del = size - n -1;
        
        for(int i = 0; i < del; i++){
            temp = temp->next;
        }     
    
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next; 
        delete nodeToDelete;

        return head;
    }
};