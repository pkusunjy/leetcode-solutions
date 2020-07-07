#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> res(A[0].size());
        for(int i = 0; i < A[0].size(); i++) {
            vector<int> tmp(A.size(), 0);
            for(int j = 0; j < A.size(); j++) {
                tmp[j] = A[j][i];
            }
            res[i] = tmp;
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    // TODO: vector<vector<int>> constructor
    return 0;
}