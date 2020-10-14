#include "global.hpp"
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr)  return root;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int cnt = q.size();
            for (int i = 0; i < cnt; i++) {
                Node* tmp = q.front();
                q.pop();
                if (i < cnt - 1) {
                    tmp->next = q.front();
                }
                if (tmp->left != nullptr)  q.push(tmp->left);
                if (tmp->right != nullptr)  q.push(tmp->right);
            }
        }
        return root;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
