#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res(S.size() + 1, 0);
        int idx = 0;
        int l = 0;
        int r = S.size();
        for(; idx < S.size(); idx++) {
            if(S[idx] == 'I') {
                res[idx] = l++;
            } else {
                res[idx] = r--;
            }
        }
        res[idx] = l;
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> res = s.diStringMatch("IDID");
    for(int& i: res) {
        cout << i << " ";
    }
    cout << endl;
    res = s.diStringMatch("III");
    for(int& i: res) {
        cout << i << " ";
    }
    cout << endl;
    res = s.diStringMatch("DDI");
    for(int& i: res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}