#include "global.hpp"
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        set<char> st;
        int i = 0, j = 0;
        while(i < s.size() && j < s.size()) {
            if(st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                j++;
                res = max(res, j - i);
            } else {
                st.erase(s[i]);
                i++;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string str = "abcabcbb";
    cout << s.lengthOfLongestSubstring(str) << endl;
    str = "bbbbb";
    cout << s.lengthOfLongestSubstring(str) << endl;
    str = "pwwkew";
    cout << s.lengthOfLongestSubstring(str) << endl;
    return 0;
}