#include "global.hpp"
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL)  return false;
        ListNode* fast = head;
        ListNode* slow = head;
        int len = 0;
        while (fast != NULL) {
            fast = fast->next;
            len++;
        }
        fast = head;
        for (int i = 0; i < len / 2; i++) {
            for (int j = 0; j < i; j++)  slow = slow->next;
            for (int j = 0; j < len - 1 - i; j++)  fast = fast->next;
            if (slow->val != fast->val)  return false;
            slow = head;
            fast = head;
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 2, 3, 4, 5, 6, 3, 2, 1});
    cout << s.isPalindrome(head) << endl;
    return 0;
}
