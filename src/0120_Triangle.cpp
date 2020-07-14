#include "global.hpp"
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = 1; i < triangle.size(); i++) {
            triangle[i][0] += triangle[i - 1][0];
            for(int j = 1; j < i; j++) {
                triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
            }
            triangle[i][i] += triangle[i - 1][i - 1];
        }
        int n = triangle.size() - 1;
        return *min_element(triangle[n].begin(), triangle[n].end());
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << s.minimumTotal(triangle) << endl;
    return 0;
}