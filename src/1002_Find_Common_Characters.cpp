#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> minFreq(26, INT_MAX);
        vector<int> tmp(26, 0);
        for (int i = 0; i < A.size(); i++) {
            fill(tmp.begin(), tmp.end(), 0);
            for (const char& c : A[i]) {
                tmp[c - 'a'] += 1;
            }
            for (int j = 0; j < 26; j++) {
                minFreq[j] = min({minFreq[j], tmp[j]});
            }
        }
        vector<string> res;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                res.emplace_back(string(1, i + 'a'));
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<string> A({"bella","label","roller"});
    vector<string> res = s.commonChars(A);
    for (const auto& str : res) {
        cout << str << endl;
    }
    return 0;
}
