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
    ListNode* removeElements(ListNode* head, int v) {
        ListNode* prev;
        ListNode* cur;
        prev=NULL;
        cur=head;
        while(cur!=NULL){
            if(cur->val==v){
                if(head==cur){
                    head=cur->next;
                    cur=cur->next;
                }
                else{
                    prev->next=cur->next;
                    cur=cur->next;
                }
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        return head;
    }
};