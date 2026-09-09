class Solution {

    int add(ListNode* l1, ListNode* l2, ListNode*& ans) {

        if (l1 == nullptr && l2 == nullptr)
            return 0;

        int carry = add(l1->next, l2->next, ans);

        int sum = l1->val + l2->val + carry;

        int digit = sum % 10;
        carry = sum / 10;

        ListNode* node = new ListNode(digit);
        node->next = ans;
        ans = node;

        return carry;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int n1 = 0;
        int n2 = 0;

        ListNode* c = l1;

        while (c) {
            c = c->next;
            n1++;
        }

        c = l2;

        while (c) {
            c = c->next;
            n2++;
        }

        // Make lengths equal
        if (n1 < n2) {
            int d = n2 - n1;

            while (d--) {
                l1 = new ListNode(0, l1);
            }
        }
        else {
            int d = n1 - n2;

            while (d--) {
                l2 = new ListNode(0, l2);
            }
        }

        ListNode* ans = nullptr;

        int carry = add(l1, l2, ans);

        if (carry) {
            ans = new ListNode(carry, ans);
        }

        return ans;
    }
};