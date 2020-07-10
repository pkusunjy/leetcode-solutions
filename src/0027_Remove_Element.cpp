#include "global.hpp"
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = remove(nums.begin(), nums.end(), val);
        nums.erase(it, nums.end());
        return nums.size();
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    cout << s.removeElement(nums, 3) << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << s.removeElement(nums, 2) << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}