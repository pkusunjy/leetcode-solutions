#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l = 0;
        int r = A.size() - 1;
        while (l < r) {
            if (A[l] % 2 == 1 && A[r] % 2 == 0) {
                int tmp = A[l];
                A[l] = A[r];
                A[r] = tmp;
            }
            else {
                if (A[l] % 2 == 0)  l++;
                if (A[r] % 2 == 1)  r--;
            }
        }
        return A;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> A({3,1,2,4});
    vector<int> res = s.sortArrayByParity(A);
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}
