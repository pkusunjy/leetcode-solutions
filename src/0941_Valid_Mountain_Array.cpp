#include "global.hpp"
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if (A.size() < 3)  return false;
        int l = 0;
        int r = A.size() - 1;
        while (l < A.size() - 1 && A[l] < A[l+1]) {
            l++;
        }
        while (r > 0 && A[r] < A[r-1]) {
            r--;
        }
        return l > 0 && r < A.size() - 1 && l == r;
    }
};

int main() {
    Solution s;
    vector<int> A = {2, 1};
    cout << s.validMountainArray(A) << endl;
    A = {3, 5, 5};
    cout << s.validMountainArray(A) << endl;
    A = {0, 3, 2, 1};
    return 0;
}
