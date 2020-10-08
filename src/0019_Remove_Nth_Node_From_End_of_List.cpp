#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        for (int i = 0; i < n + 1; i++) {
            fast = fast->next;
        }
        ListNode* slow = dummy;
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 2, 3, 4, 5});
    int n = 2;
    ListNode* res = s.removeNthFromEnd(head, n);
    printList(res);
    return 0;
}
