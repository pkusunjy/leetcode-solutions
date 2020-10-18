#include "global.hpp"
using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> sS, sT;
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '#') {
                if (sS.empty())  continue;
                else sS.pop();
            }
            else {
                sS.push(S[i]);
            }
        }
        for (int i = 0; i < T.size(); i++) {
            if (T[i] == '#') {
                if (sT.empty())  continue;
                else sT.pop();
            }
            else {
                sT.push(T[i]);
            }
        }
        return sS == sT;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.backspaceCompare("ab#c", "ad#c") << endl;
    return 0;
}
