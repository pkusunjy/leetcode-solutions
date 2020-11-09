#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin(), points.end(), [&](const vector<int>& p1, const vector<int>& p2) {
            return p1[0] * p1[0] + p1[1] * p1[1] < p2[0] * p2[0] + p2[1] * p2[1];
        });
        return vector<vector<int>>(points.begin(), points.begin() + K);
    }
};

int main() {
    Solution s;
    vector<vector<int>> points = {{3, 3}, {5, -1}, {-2, 4}};
    vector<vector<int>> res = s.kClosest(points, 2);
    for (auto i : res) {
        cout << i[0] << " " << i[1] << endl;
    }
    return 0;
}
