#include "global.hpp"
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int aLen = 0;
        int bLen = 0;
        ListNode* atmp = new ListNode(0);
        atmp->next = headA;
        ListNode* btmp = new ListNode(0);
        btmp->next = headB;
        while (atmp->next != NULL) {
            aLen++;
            atmp = atmp->next;
        }
        while (btmp->next != NULL) {
            bLen++;
            btmp = btmp->next;
        }
        atmp = headA;
        btmp = headB;
        if (aLen > bLen) {
            for (int i = 0; i < aLen - bLen; i++) {
                atmp = atmp->next;
            }
        }
        if (bLen > aLen) {
            for (int i = 0; i < bLen - aLen; i++) {
                btmp = btmp->next;
            }
        }
        while (atmp != NULL && btmp != NULL) {
            if (atmp == btmp)  break;
            atmp = atmp->next;
            btmp = btmp->next;
        }
        return atmp;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
