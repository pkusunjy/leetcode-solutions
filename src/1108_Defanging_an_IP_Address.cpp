#include "global.hpp"
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(int i = 0; i < address.size(); i++) {
            if(address[i] == '.') {
                res.append("[.]");
            } else {
                res.append(basic_string<char>({address[i]}));
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string str = "1.1.1.1";
    cout << s.defangIPaddr(str) << endl;
    str = "255.100.50.0";
    cout << s.defangIPaddr(str) << endl;
    return 0;
}