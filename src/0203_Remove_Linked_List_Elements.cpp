#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmp = new ListNode(0);
        tmp->next = head;
        ListNode* res = tmp;
        while (tmp != nullptr && tmp->next != nullptr) {
            ListNode* innertmp = tmp->next;
            while (innertmp != nullptr && innertmp->val == val) {
                tmp->next = innertmp->next;
                innertmp = innertmp->next;
            }
            tmp = tmp->next;
        }
        return res->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 2, 6, 3, 4, 5, 6});
    ListNode* res = s.removeElements(head, 6);
    printList(res);
    return 0;
}
