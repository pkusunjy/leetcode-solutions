#include "global.hpp"
using namespace std;

class Solution {
public:
    string removeDuplicates(string S) {
        if (S.empty())  return "";
        stack<char> st;
        st.push(S[0]);
        for (int i = 1; i < S.size(); i++) {
            if (!st.empty() && S[i] == st.top()) {
                st.pop();
            }
            else {
                st.push(S[i]);
            }
        }
        string res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.removeDuplicates("abbaca") << endl;
    return 0;
}
