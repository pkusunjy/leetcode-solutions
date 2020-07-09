#include "global.hpp"
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int balancer = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'L') {
                balancer--;
            }
            if(s[i] == 'R') {
                balancer++;
            }
            if(balancer == 0) {
                res++;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string str = "RLRRLLRLRL";
    cout << s.balancedStringSplit(str) << endl;
    str = "RLLLLRRRLR";
    cout << s.balancedStringSplit(str) << endl;
    str = "LLLLRRRR";
    cout << s.balancedStringSplit(str) << endl;
    return 0;
}