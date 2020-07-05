#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n = A.size();
        for(int i = 0; i < n; i++) { // rows
            for(int j = 0; j < n / 2; j++) { // cols
                int& l = A[i][j];
                int& r = A[i][n - 1 - j];
                if(l == r) {
                    l = 1 - l;
                    r = 1 - r;
                }
            }
            if(n % 2 == 1) {
                A[i][n / 2] = 1 - A[i][n / 2];
            }
        }
        return A;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> A = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};
    vector<vector<int>> res = s.flipAndInvertImage(A);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}