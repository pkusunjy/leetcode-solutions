#include "global.hpp"
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        s.erase(0, s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);
        if (s.empty())  return 0;
        regex ws_re(" ");
        vector<string> vec(
            sregex_token_iterator(s.begin(), s.end(), ws_re, -1),
            sregex_token_iterator()
        );
        int res = 0;
        for_each(vec.begin(), vec.end(), [&](const string& str) {
            if (str.size() > 0)  res++;
        });
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.countSegments(", , , ,        a, eaefa") << endl;
    return 0;
}
