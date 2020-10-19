#include "global.hpp"
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> vecs(26, 0);
        vector<int> vect(26, 0);
        for (int i = 0; i < s.size(); i++) {
            vecs[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++) {
            vect[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (vecs[i] < vect[i])  return i + 'a';
        }
        return 'a';
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.findTheDifference("abcd", "abcde") << endl;
    return 0;
}
