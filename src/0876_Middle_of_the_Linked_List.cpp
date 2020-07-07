#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int len = 0;
        while(tmp != NULL) {
            len++;
            tmp = tmp->next;
        }
        tmp = head;
        int steps = 0;
        if(len % 2 == 0) {
            steps = len / 2;
        } else {
            steps = len / 2 + 1;
        }
        for(int i = 0; i < steps; i++) {
            tmp = tmp->next;
        }
        while(tmp != NULL) {
            head = head->next;
            tmp = tmp->next;
        }
        return head;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 2, 3, 4, 5});
    ListNode* res = s.middleNode(head);
    printList(res);
    head = genList({1, 2, 3, 4, 5, 6});
    res = s.middleNode(head);
    printList(res);
    return 0;
}