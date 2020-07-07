#include "global.hpp"
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for_each(str.begin(), str.end(), [](char& c) { 
            if('A' <= c && c <= 'Z') {
                c = c - 'A' + 'a';
            }
        });
        return str;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    string str = "Hello";
    cout << s.toLowerCase(str) << endl;
    str = "here";
    cout << s.toLowerCase(str) << endl;
    str = "LOVELY";
    cout << s.toLowerCase(str) << endl;
    return 0;
}