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
    vector<int> postorder(Node* root) {
        vector<int> res;
        if (root == nullptr)  return res;
        stack<Node*> st;
        st.push(root);
        while (!st.empty()) {
            Node* tmp = st.top();
            st.pop();
            res.push_back(tmp->val);
            for (auto child : tmp->children) {
                st.push(child);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    return 0;
}
