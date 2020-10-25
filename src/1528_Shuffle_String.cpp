#include "global.hpp"
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res(s.size(), 0);
        for (int i = 0; i < s.size(); i++) {
            res[indices[i]] = s[i];
        }
        return res;
    }
};

int main() {
    return 0;
}
