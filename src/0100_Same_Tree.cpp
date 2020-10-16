#include "global.hpp"
using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if ((!p) && (!q))  return true;
        if ((!p) && q || p && (!q))  return false;
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
