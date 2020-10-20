#include "global.hpp"
using namespace std;

class Solution {
public:
    void reorderList(ListNode* head) {
        list<ListNode*> li;
        while (head != nullptr) {
            li.push_back(head);
            head = head->next;
        }
        ListNode* res = new ListNode(0);
        ListNode* tmp = res;
        bool flag = false;
        while(true) {
            if (li.empty())  break;
            if (!flag) {
                tmp->next = li.front();
                li.pop_front();
                flag = true;
            }
            else {
                tmp->next = li.back();
                li.pop_back();
                flag = false;
            }
            tmp = tmp->next;
        }
        tmp->next = nullptr;
        head = res->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 2, 3, 4});
    s.reorderList(head);
    printList(head);
    return 0;
}
