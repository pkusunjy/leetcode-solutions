#include "global.hpp"
using namespace std;

class Solution {
public:
    int dfs (TreeNode* root, int sum) {
        if (root == NULL)  return 0;
        if (root->left == NULL && root->right == NULL) {
            return 10 * sum + root->val;
        }
        return dfs(root->left, 10 * sum + root->val) + dfs(root->right, 10 * sum + root->val);
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};

int main() {
    return 0;
}
