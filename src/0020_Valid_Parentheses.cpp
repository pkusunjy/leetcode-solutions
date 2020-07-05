#include "global.hpp"
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.empty())  return true;
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++) {
            char c = st.top();
            if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if(st.empty())  return false;
                char c = st.top();
                if((c == '(' && s[i] == ')') || 
                   (c == '[' && s[i] == ']') || 
                   (c == '{' && s[i] == '}')) {
                       st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string str = "()";
    cout << s.isValid(str) << endl;
    str = "()[]{}";
    cout << s.isValid(str) << endl;
    str = "(]";
    cout << s.isValid(str) << endl;
    str = "([)]";
    cout << s.isValid(str) << endl;
    str = "{[]}";
    cout << s.isValid(str) << endl;
    return 0;
}