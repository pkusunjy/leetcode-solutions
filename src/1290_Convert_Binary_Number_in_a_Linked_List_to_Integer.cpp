#include "global.hpp"
using namespace std;

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        while(head != NULL) {
            res = res * 2 + head->val;
            head = head->next;
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    ListNode* head = genList({1, 0, 1});
    int res = s.getDecimalValue(head);
    cout << res << endl;
    return 0;
}