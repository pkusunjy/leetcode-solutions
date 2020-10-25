#include "global.hpp"
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if (root == nullptr)  return res;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int len = q.size();
            vector<int> restmp(len, 0);
            for (int i = 0; i < len; i++) {
                Node* tmp = q.front();
                q.pop();
                restmp[i] = tmp->val;
                for (Node* n : tmp->children) {
                    q.push(n);
                }
            }
            res.push_back(restmp);
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
