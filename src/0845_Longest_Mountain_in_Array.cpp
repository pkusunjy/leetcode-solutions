#include "global.hpp"
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& A) {
        if (A.size() < 3)  return 0;
        int start = 0;
        int end = 0;
        int res = 0;
        while (start < A.size() - 2) {
            end = start + 1;
            if (A[start] < A[start + 1]) {
                while (end < A.size() - 1 && A[end] < A[end + 1]) {
                    end++;
                }
                if (end < A.size() - 1 && A[end] > A[end + 1]) {
                    while (end < A.size() - 1 && A[end] > A[end + 1]) {
                        end++;
                    }
                    res = max(res, end - start + 1);
                }
                else {
                    end++;
                }
            }
            start = end;
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> A({2,1,4,7,3,2,5});
    cout << s.longestMountain(A) << endl;
    return 0;
}
