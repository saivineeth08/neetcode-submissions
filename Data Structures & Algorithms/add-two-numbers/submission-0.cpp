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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* slow = l1;
        ListNode* fast = l1;
        int c = 1;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            c += 2;
        }

        if (fast->next != nullptr) {
            c++;
        }

        // ListNode* slow1 = l2;
        ListNode* fast1 = l2;
        ListNode* p1 = nullptr;
        ListNode* p2 = nullptr;
        int c1 = 1;

        while (fast1->next != nullptr && fast1->next->next != nullptr) {
            fast1 = fast1->next->next;
            c1 += 2;
        }

        if (fast1->next != nullptr) {
            c1++;
        }

        int rem = 0, add = 0;
        ListNode* s1 = l1;
        ListNode* s2 = l2;

        while (s1 != nullptr && s2 != nullptr) {
            if ((s1->val + s2->val + add) >= 10) {
                rem = (s1->val + s2->val + add) % 10;

                if (c >= c1) {
                    s1->val = rem;
                    add = 1;
                } else {
                    s2->val = rem;
                    add = 1;
                }

                p1 = s1;
                p2 = s2;
                s1 = s1->next;
                s2 = s2->next;
            } else {
                if (c >= c1) {
                    s1->val = (s1->val + s2->val + add);
                    add = 0;
                } else {
                    s2->val = (s1->val + s2->val + add);
                    add = 0;
                }

                p1 = s1;
                p2 = s2;
                s1 = s1->next;
                s2 = s2->next;
            }
        }

        while (s1 != nullptr) {
            if ((s1->val + add) >= 10) {
                rem = (s1->val + add) % 10;
                s1->val = rem;
                add = 1;
                p1 = s1;
                s1 = s1->next;
            } else {
                s1->val = s1->val + add;
                p1 = s1;
                s1 = s1->next;
                add = 0;
            }
        }

        while (s2 != nullptr) {
            if ((s2->val + add) >= 10) {
                rem = (s2->val + add) % 10;
                s2->val = rem;
                add = 1;
                p2 = s2;
                s2 = s2->next;
            } else {
                s2->val = s2->val + add;
                s2 = s2->next;
                p2 = s2;
                add = 0;
            }
        }

        if (add == 1) {
            ListNode* temp = new ListNode(1);

            if (c >= c1) {
                p1->next = temp;
                return l1;
            } else {
                p2->next = temp;
                return l2;
            }
        } else {
            if (c >= c1) {
                return l1;
            } else {
                return l2;
            }
        }

        return nullptr;
    }
};