#include "global.hpp"
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                res += 4 * grid[i][j];
            }
        }
        for (int i = 0; i < grid.size() - 1; i++) {
            for (int j = 0; j < grid[i].size() - 1; j++) {
                if (grid[i][j] == 1 && grid[i][j+1] == 1)  res -= 2;
                if (grid[i][j] == 1 && grid[i+1][j] == 1)  res -= 2;
            }
        }
        for (int i = 0; i < grid.size() - 1; i++) {
            if (grid[i][grid[i].size() - 1] && grid[i+1][grid[i].size() - 1])  res -= 2;
        }
        for (int i = 0; i < grid[0].size() - 1; i++) {
            if (grid[grid.size()-1][i] && grid[grid.size()-1][i+1])  res -= 2;
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 0}
    };
    cout << s.islandPerimeter(grid) << endl;
    return 0;
}
