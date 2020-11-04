#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        vector<int> tmp = newInterval;
        bool done = false;
        for (auto& interval : intervals) {
            if (interval[1] < newInterval[0]) {
                res.push_back(interval);
                continue;
            }
            if (!done) {
                tmp[0] = min(tmp[0], interval[0]);
                if (tmp[1] >= interval[0]) {
                    tmp[1] = max(tmp[1], interval[1]);
                }
                else {
                    done = true;
                    res.push_back(tmp);
                }
            }
            if (done) {
                res.push_back(interval);
            }
        }
        if (!done) {
            res.push_back(tmp);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> intervals = {{1,2},{6,7},{8,10},{12,16}};
    vector<int> newInterval = {17, 23};
    vector<vector<int>> res = s.insert(intervals, newInterval);
    for (auto i : res) {
        cout << i[0] << " " << i[1] << endl;
    }
    return 0;
}
