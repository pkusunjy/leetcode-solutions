#include "global.hpp"
using namespace std;

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        unordered_set<ListNode*> st;
        ListNode* tmp = head;
        while (tmp != nullptr) {
            if (st.find(tmp) != st.end()) {
                return tmp;
            }
            st.insert(tmp);
            tmp = tmp->next;
        }
        return nullptr;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* l1 = genList({1, 2, 3, 4, 5});
    cout << s.detectCycle(l1) << endl;
    return 0;
}
