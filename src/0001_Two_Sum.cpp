#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                return vector<int>({m[target - nums[i]], i});
            } else {
                m[nums[i]] = i;
            }
        }
        return vector<int>();
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({1, 2, 3, 4, 5});
    vector<int> res = s.twoSum(nums, 7);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}