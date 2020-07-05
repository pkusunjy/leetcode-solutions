#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(-1);
        ListNode* tmp = res;
        int carry = 0;
        while(l1 != NULL && l2 != NULL) {
            int n1 = l1->val;
            int n2 = l2->val;
            tmp->next = new ListNode((n1 + n2 + carry) % 10);
            carry = (n1 + n2 + carry) / 10;
            l1 = l1->next;
            l2 = l2->next;
            tmp = tmp->next;
        }
        while(l1 != NULL) {
            int n = l1->val;
            tmp->next = new ListNode((n + carry) % 10);
            carry = (n + carry) / 10;
            l1 = l1->next;
            tmp = tmp->next;
        }
        while(l2 != NULL) {
            int n = l2->val;
            tmp->next = new ListNode((n + carry) % 10);
            carry = (n + carry) / 10;
            l2 = l2->next;
            tmp = tmp->next;
        }
        if(carry != 0) {
            tmp->next = new ListNode(carry);
        }
        return res->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* l1 = genList({2, 4, 3});
    ListNode* l2 = genList({5, 6, 4});
    ListNode* l3 = s.addTwoNumbers(l1, l2);
    printList(l3);
    return 0;
}