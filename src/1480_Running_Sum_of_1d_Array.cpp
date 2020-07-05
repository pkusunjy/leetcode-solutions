#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            res[i] = res[i-1] + nums[i];
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({1, 2, 3, 4});
    vector<int> res = s.runningSum(nums);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}