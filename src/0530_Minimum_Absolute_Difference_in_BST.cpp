#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> toArray(TreeNode* root) {
        vector<int> res;
        if (root == nullptr)  return res;
        res = toArray(root->left);
        res.push_back(root->val);
        vector<int> r = toArray(root->right);
        res.insert(res.end(), r.begin(), r.end());
        return res;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr = toArray(root);
        int res = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++) {
            res = min({res, arr[i+1] - arr[i]});
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
