#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        sort(A.begin(), A.end(), [](const int& a, const int& b) {
            return abs(a) < abs(b);
        });
        for_each(A.begin(), A.end(), [&](int& n) {
            n *= n;
        });
        return A;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> A({-4,-1,0,3,10});
    vector<int> res = s.sortedSquares(A);
    for (int& i : res) {
        cout << i << endl;
    }
    return 0;
}
