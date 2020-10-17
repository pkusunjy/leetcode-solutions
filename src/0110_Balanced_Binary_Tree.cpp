#include "global.hpp"
using namespace std;

class Solution {
public:
    int depth(TreeNode* root) {
        int res = 0;
        if (root == nullptr)  return res;
        return 1 + max(depth(root->left), depth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)  return true;
        int leftDepth = depth(root->left);
        int rightDepth = depth(root->right);
        return abs(rightDepth - leftDepth) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
