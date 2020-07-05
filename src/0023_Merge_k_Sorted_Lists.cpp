#include "global.hpp"
using namespace std;

class Solution {
public:
    struct Status {
        int val;
        ListNode *ptr;
        bool operator < (const Status &rhs) const {
            return val > rhs.val;
        }
    };

    priority_queue <Status> q;

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for (auto node: lists) {
            if (node) q.push({node->val, node});
        }
        ListNode* head = new ListNode(-1);
        ListNode* tail = head;
        while (!q.empty()) {
            auto f = q.top(); q.pop();
            tail->next = f.ptr; 
            tail = tail->next;
            if (f.ptr->next) q.push({f.ptr->next->val, f.ptr->next});
        }
        return head->next;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* l1 = genList({1, 4, 5});
    ListNode* l2 = genList({1, 3, 4});
    ListNode* l3 = genList({2, 6});
    vector<ListNode*> lists({l1, l2, l3});
    ListNode* res = s.mergeKLists(lists);
    printList(res);
    return 0;
}