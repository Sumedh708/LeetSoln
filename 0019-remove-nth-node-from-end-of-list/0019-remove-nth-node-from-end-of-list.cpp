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
        if(head == NULL)    return head;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* prev;
        prev=dummy;
        int count=0;
        
        while(temp!=NULL){
            count++;
            if(count>n){
                prev=prev->next;
            }
            temp=temp->next;
        }
        ListNode* x;
        x=prev->next;
        prev->next = x->next;
        delete x;
        head=dummy->next;
        delete dummy;
        return head;
    }
};