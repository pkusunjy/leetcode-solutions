#ifndef GLOBAL_H
#define GLOBAL_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <initializer_list>

#include <climits>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// fastly generate a leetcode-style list
ListNode* genList(const initializer_list<int>& li) {
    if(li.size() == 0)  return NULL;
    ListNode* res = new ListNode(-1);
    ListNode* tmp = res;
    for(const auto i: li) {
        tmp->next = new ListNode(i);
        tmp = tmp->next;
    }
    return res->next;
}

void printList(ListNode* l) {
    while(l != NULL) {
        cout << l->val << "->";
        l = l->next;
    }
    cout << "NULL" << endl;
}

#endif // GLOBAL_H