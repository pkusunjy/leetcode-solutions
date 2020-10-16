#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (root == nullptr)  return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int len = q.size();
            double totSum = 0;
            for (int i = 0; i < len; i++) {
                TreeNode* tmp = q.front();
                q.pop();
                totSum += static_cast<double>(tmp->val);
                if (tmp->left)  q.push(tmp->left);
                if (tmp->right)  q.push(tmp->right);
            }
            res.push_back(totSum / len);
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
