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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL)    return head;
        ListNode* temp=head;
        
        ListNode* mover=head;
        ListNode* swap=head;
        int count=0;
        int countn=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
            countn++;
            if(count>=k+1){
                mover=mover->next;
                countn++;
            }
            if(countn==k-1)
                swap=temp;
        }
        int swapval=mover->val;
        mover->val=swap->val;
        swap->val=swapval;
        return head;
    }
};