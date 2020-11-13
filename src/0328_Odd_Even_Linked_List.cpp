#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)  return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* tmpodd = odd;
        ListNode* tmpeven = even;
        while (tmpeven != nullptr && tmpeven->next != nullptr) {
            tmpodd->next = tmpeven->next;
            tmpodd = tmpodd->next;
            tmpeven->next = tmpodd->next;
            tmpeven = tmpeven->next;
        }
        tmpodd->next = even;
        return odd;
    }
};

int main() {
    Solution s;
    ListNode* head = genList({1, 2, 3, 4, 5});
    ListNode* res = s.oddEvenList(head);
    printList(res);
    return 0;
}
