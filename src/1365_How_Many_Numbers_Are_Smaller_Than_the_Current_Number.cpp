#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> counter(101, 0);
        for (int i = 0; i < nums.size(); i++) {
            counter[nums[i]]++;
        }
        for (int i = 1; i < counter.size(); i++) {
            counter[i] += counter[i-1];
        }
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[i] == 0 ? 0 : counter[nums[i] - 1]);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums({1, 5, 4, 8});
    vector<int> res = s.smallerNumbersThanCurrent(nums);
    for (int& i : res) {
        cout << i << endl;
    }
    return 0;
}
