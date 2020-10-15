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
    vector<int> preorder(Node* root) {
        vector<int> res;
        if (root == nullptr)  return res;
        stack<Node*> st;
        st.push(root);
        while (!st.empty()) {
            Node* tmp = st.top();
            st.pop();
            res.push_back(tmp->val);
            if (!tmp->children.empty()) {
                for (int i = tmp->children.size() - 1; i >= 0; i--) {
                    st.push(tmp->children[i]);
                }
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
