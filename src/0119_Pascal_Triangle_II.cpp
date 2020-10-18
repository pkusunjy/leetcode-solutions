#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)  return vector<int>({1});
        if (rowIndex == 1)  return vector<int>({1, 1});
        vector<int> pre = getRow(rowIndex - 1);
        vector<int> res(rowIndex + 1, 1);
        for (int i = 1; i < res.size() - 1; i++) {
            res[i] = pre[i - 1] + pre[i];
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> res = s.getRow(3);
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}
