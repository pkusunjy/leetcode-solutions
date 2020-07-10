#include "global.hpp"
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int n = max({a.size(), b.size()});
        int carry = 0;
        for(int i = 0; i < n; i++) {
            if(i < a.size() && a[i] == '1') {
                carry++;
            }
            if(i < b.size() && b[i] == '1') {
                carry++;
            }
            res.push_back(carry % 2 == 1 ? '1' : '0');
            carry /= 2;
        }
        if(carry != 0) {
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string a = "11", b = "1";
    cout << s.addBinary(a, b) << endl;
    a = "1010";
    b = "1011";
    cout << s.addBinary(a, b) << endl;
    return 0;
}