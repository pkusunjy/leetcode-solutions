#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)  return head;
        ListNode* tmp = new ListNode(0);
        tmp->next = head;
        ListNode* res = tmp;
        while (tmp->next != nullptr && tmp->next->next != nullptr) {
            ListNode* slow = tmp->next;
            ListNode* fast = tmp->next->next;
            tmp->next = fast;
            slow->next = fast->next;
            fast->next = slow;
            tmp = slow;
        }
        return res->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 2, 3, 4});
    ListNode* res = s.swapPairs(head);
    printList(res);
    return 0;
}
