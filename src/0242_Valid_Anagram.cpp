#include "global.hpp"
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vs(26, 0);
        vector<int> vt(26, 0);
        for(const char& c: s) {
            vs[c - 'a']++;
        }
        for(const char& c: t) {
            vt[c - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(vs[i] != vt[i])  return false;
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string str = "anagram";
    string t = "nagaram";
    cout << s.isAnagram(str, t) << endl;
    str = "rat";
    t = "car";
    cout << s.isAnagram(str, t) << endl;
    return 0;
}