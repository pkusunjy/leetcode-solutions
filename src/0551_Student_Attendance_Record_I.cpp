#include "global.hpp"
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int aCnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A')  aCnt++;
            if (aCnt > 1)  return false;
        }
        return s.find("LLL") == string::npos;
    }
};

int main() {
    Solution s;
    cout << s.checkRecord("PPALLP") << endl;
    cout << s.checkRecord("PPALLL") << endl;
    return 0;
}
