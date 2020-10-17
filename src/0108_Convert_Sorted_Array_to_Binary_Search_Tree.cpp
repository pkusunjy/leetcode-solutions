#include "global.hpp"
using namespace std;

class Solution {
public:
    TreeNode* recursive(vector<int>& nums, int l, int r) {
        if (l < 0 || r > nums.size() - 1 || l > r)  return nullptr;
        if (l == r)  return new TreeNode(nums[l]);
        int mid = l + (r - l) / 2;
        TreeNode* res = new TreeNode(nums[mid]);
        res->left = recursive(nums, l, mid - 1);
        res->right = recursive(nums, mid + 1, r);
        return res;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return recursive(nums, 0, nums.size() - 1);
    }
};

int main(int argc, char* argv[]) {
    return 0;
}
