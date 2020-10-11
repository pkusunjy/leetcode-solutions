#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> m;
        for (int& n : nums) {
            m[n]++;
        }
        int dup, mis;
        for (int i = 1; i <= nums.size(); i++) {
            if (m.find(i) == m.end()) {
                mis = i;
            }
            else if (m[i] == 2) {
                dup = i;
            }
        }
        return vector<int>({dup, mis});
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({1, 2, 2, 4});
    vector<int> res = s.findErrorNums(nums);
    cout << res[0] << endl;
    cout << res[1] << endl;
    return 0;
}
