#ifndef GLOBAL_H
#define GLOBAL_H

#include <bitset>
#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <initializer_list>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
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

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

#endif // GLOBAL_H
