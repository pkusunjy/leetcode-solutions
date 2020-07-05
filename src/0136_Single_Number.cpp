#include "global.hpp"
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            res = res ^ nums[i];
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({2, 2, 1});
    cout << s.singleNumber(nums) << endl;
    nums = {4, 1, 2, 1, 2};
    cout << s.singleNumber(nums) << endl;
    return 0;
}