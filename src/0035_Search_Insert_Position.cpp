#include "global.hpp"
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target <= nums[0])  return 0;
        if (target > nums[nums.size() - 1])  return nums.size();
        int l = 0;
        int r = nums.size() - 1;
        int res = nums.size();
        while (l <= r) {
            int mid = (r - l) / 2 + l;
            if (nums[mid] >= target) {
                res = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << s.searchInsert(nums, target) << endl;
    target = 2;
    cout << s.searchInsert(nums, target) << endl;
    target = 7;
    cout << s.searchInsert(nums, target) << endl;
    target = 0;
    cout << s.searchInsert(nums, target) << endl;
    return 0;
}
