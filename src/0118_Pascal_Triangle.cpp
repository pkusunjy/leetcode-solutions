#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for (int i = 0; i < numRows; i++) {
            res[i] = vector<int>(i + 1, 1);
        }
        for (int i = 2; i < numRows; i++) {
            for (int j = 1; j < res[i].size() - 1; j++) {
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> res = s.generate(5);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
