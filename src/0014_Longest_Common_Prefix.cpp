#include "global.hpp"
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())  return "";
        int maxLen = strs[0].size();
        int tmp = 0;
        for (int i = 0; i < strs.size(); i++) {
            int j = 0;
            for (; j < maxLen && j < strs[i].size(); j++) {
                if (strs[i][j] != strs[0][j])  break;
            }
            tmp = j;
            maxLen = min({maxLen, tmp});
        }
        return strs[0].substr(0, tmp);
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<string> strs({"dog","racecar","car"});
    cout << s.longestCommonPrefix(strs) << endl;
    strs = {"flower","flow","flight"};
    cout << s.longestCommonPrefix(strs) << endl;
    return 0;
}
