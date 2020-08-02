#include "global.hpp"
using namespace std;

class Solution {
public:
    void preOrder(TreeNode* root, vector<TreeNode*>& vec) {
        if(root != NULL) {
            vec.push_back(root);
            preOrder(root->left, vec);
            preOrder(root->right, vec);
        }
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> vec;
        preOrder(root, vec);
        for(int i = 1; i < vec.size(); i++) {
            TreeNode* prev = vec[i - 1];
            TreeNode* curr = vec[i];
            prev->left = NULL;
            prev->right = curr;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    // TODO
    return 0;
}