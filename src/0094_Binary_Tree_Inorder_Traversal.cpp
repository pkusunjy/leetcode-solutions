#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* tmp = root;
        while (!st.empty() || tmp != nullptr) {
            if (tmp != nullptr) {
                st.push(tmp);
                tmp = tmp->left;
            }
            else {
                tmp = st.top();
                st.pop();
                res.push_back(tmp->val);
                tmp = tmp->right;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

