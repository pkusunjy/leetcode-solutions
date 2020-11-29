#include "global.hpp"
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        if (A.size() < 3)  return 0;
        sort(A.begin(), A.end(), less<int>());
        for (size_t i = A.size() - 1; i >= 2; i--) {
            if (A[i - 2] + A[i - 1] > A[i]) {
                return A[i - 2] + A[i - 1] + A[i];
            }
        }
        return 0;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> A({2, 1, 2});
    cout << s.largestPerimeter(A) << endl;
    return 0;
}