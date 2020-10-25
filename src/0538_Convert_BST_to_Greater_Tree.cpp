#include "global.hpp"
using namespace std;

class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        vector<TreeNode*> res;
        stack<TreeNode*> st;
        if (root == nullptr)  return nullptr;
        TreeNode* tmp = root;
        while (!st.empty() || tmp != nullptr) {
            if (tmp != nullptr) {
                st.push(tmp);
                tmp = tmp->left;
            }
            else {
                tmp = st.top();
                st.pop();
                res.push_back(tmp);
                tmp = tmp->right;
            }
        }
        int totSum = 0;
        for (int i = res.size() - 1; i >= 0; i--) {
            res[i]->val += totSum;
            totSum = res[i]->val;
        }
        return root;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
