#include "global.hpp"
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(0, s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);
        if (s.empty())  return 0;
        int lastspace = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ')  lastspace = i;
        }
        if (lastspace == -1) {
            return s.size();
        }
        else {
            return s.size() - 1 - lastspace;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.lengthOfLastWord("Hello World") << endl;
    return 0;
}
