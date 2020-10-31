#include "global.hpp"
using namespace std;

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL)  return t2;
        if (t2 == NULL)  return t1;
        TreeNode* res = new TreeNode(t1->val + t2->val);
        res->left = mergeTrees(t1->left, t2->left);
        res->right = mergeTrees(t1->right, t2->right);
        return res;
    }
};

int main() {
    return 0;
}
