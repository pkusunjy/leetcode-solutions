#include "global.hpp"
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if ('a' <= word[0] && word[0] <= 'z') {
            for (int i = 1; i < word.size(); i++) {
                if ('A' <= word[i] && word[i] <= 'Z')  return false;
            }
            return true;
        }
        else {
            bool allUpper = true;
            bool allLower = true;
            for (int i = 1; i < word.size(); i++) {
                if ('A' <= word[i] && word[i] <= 'Z')  allLower = false;
                if ('a' <= word[i] && word[i] <= 'z')  allUpper = false;
            }
            return allUpper || allLower;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string word = "USA";
    cout << s.detectCapitalUse(word) << endl;
    return 0;
}
