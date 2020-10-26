#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr)  return res;
        stack<TreeNode*> st;
        TreeNode* tmp = root;
        while (!st.empty() || tmp != nullptr) {
            while (tmp != nullptr) {
                res.push_back(tmp->val);
                st.push(tmp);
                tmp = tmp->left;
            }
            tmp = st.top();
            st.pop();
            tmp = tmp->right;
        }
        return res;
    }
};

int main() {
    return 0;
}
