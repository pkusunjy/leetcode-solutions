#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        for_each(nums1.begin(), nums1.end(), [&](int& n) {
            st.insert(n);
        });
        vector<int> res;
        for (auto n : nums2) {
            if (st.count(n)) {
                st.erase(n);
                res.emplace_back(n);
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums1({1, 2, 2, 1});
    vector<int> nums2({2, 2});
    vector<int> res = s.intersection(nums1, nums2);
    for (auto n : res) {
        cout << n << endl;
    }
    return 0;
}
