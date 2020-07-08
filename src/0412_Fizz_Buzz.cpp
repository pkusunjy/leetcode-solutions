#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for(int i = 0; i < n; i++) {
            int num = i + 1;
            if(num % 15 == 0) {
                res[i] = "FizzBuzz";
            } else if(num % 5 == 0) {
                res[i] = "Buzz";
            } else if(num % 3 == 0) {
                res[i] = "Fizz";
            } else {
                res[i] = to_string(num);
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    return 0;
}