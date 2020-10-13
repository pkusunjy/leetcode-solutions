#include "global.hpp"
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())  return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({1, 2, 3, 4, 5});
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}
