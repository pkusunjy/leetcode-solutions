#include "global.hpp"
using namespace std;

class Solution {
public:
    bool hasJiaoji(vector<int>& v1, vector<int>& v2) {
        if(v1[0] > v2[1] || v2[0] > v1[1]) {
            return false;
        }
        return true;
    }
    vector<int> mergeTwo(vector<int>& vec1, vector<int>& vec2) {
        return vector<int>({min(vec1[0], vec2[0]), max(vec1[1], vec2[1])});
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty())  return vector<vector<int>>();
        sort(intervals.begin(), intervals.end(), [](const vector<int>& v1, const vector<int>& v2) {
            return v1[0] < v2[0];
        });
        vector<vector<int>> res;
        vector<int> tmp = intervals[0];
        for(int i = 1; i < intervals.size(); i++) {
            if(hasJiaoji(tmp, intervals[i])) {
                tmp = mergeTwo(tmp, intervals[i]);
            } else {
                res.emplace_back(tmp);
                tmp = intervals[i];
            }
        }
        res.emplace_back(tmp);
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = s.merge(intervals);
    for (auto i : res) {
        cout << i[0] << " " << i[1] << endl;
    }
    return 0;
}
