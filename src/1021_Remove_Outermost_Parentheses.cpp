#include "global.hpp"
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string res = "";
        stack<char> st;
        for(int i = 0, j = 0; j < S.size(); j++) {
            if(S[j] == '(') {
                st.push(S[j]);
            } else {
                st.pop();
            }
            if(st.empty()) {
                res += S.substr(i + 1, j - i - 1);
                i = j + 1;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string S = "(()())(())";
    cout << s.removeOuterParentheses(S) << endl;
    S = "(()())(())(()(()))";
    cout << s.removeOuterParentheses(S) << endl;
    S = "()()";
    cout << s.removeOuterParentheses(S) << endl;
    return 0;
}