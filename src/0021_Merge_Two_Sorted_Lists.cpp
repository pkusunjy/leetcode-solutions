#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(-1);
        ListNode* tmp = res;
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                tmp->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                tmp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            tmp = tmp->next;
        }
        if(l1 != NULL) {
            tmp->next = l1;
        }
        if(l2 != NULL) {
            tmp->next = l2;
        }
        return res->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* l1 = genList({1, 2, 4});
    ListNode* l2 = genList({1, 3, 4});
    ListNode* res = s.mergeTwoLists(l1, l2);
    printList(res);
    return 0;
}