#include "global.hpp"
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* l1 = genList({1, 2, 3, 4, 5});
    cout << s.hasCycle(l1) << endl;
    return 0;
}
