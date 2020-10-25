#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res(nums.size());
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m.insert(make_pair(nums[i], i));
        }
        vector<string> cnst({"Gold Medal", "Silver Medal", "Bronze Medal"});
        int cnt = 0;
        for (map<int, int>::reverse_iterator it = m.rbegin(); it != m.rend(); it++) {
            if (cnt < 3) {
                res[it->second] = cnst[cnt];
            }
            else {
                res[it->second] = to_string(cnt + 1);
            }
            cnt++;
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({5, 4, 3, 2, 1});
    vector<string> res = s.findRelativeRanks(nums);
    for (auto& str : res) {
        cout << str << endl;
    }
    return 0;
}
