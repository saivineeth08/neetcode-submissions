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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        int i=1;
        while(i<left){
            prev=curr;
            curr=curr->next;
            i++;
        }
        ListNode* temp=curr;
        ListNode* p=nullptr;
        ListNode* ans=nullptr;
        while(i<=right){
            if(i==right){
                ans=curr;
            }
            ListNode* nn=curr->next;
            curr->next=p;
            p=curr;
            curr=nn;
            i++;
        }
        if(prev!=nullptr){
            prev->next=p;
            temp->next=curr;
        }
        else{
            temp->next=curr;
        }
        if(left!=1){
            return head;
        }
        else{
            return ans;
        }
    }
};