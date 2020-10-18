#include "global.hpp"
using namespace std;

class Solution {
public:
    int getdigits(int num) {
        if (num == 0)  return 1;
        int res = 0;
        while (num > 0) {
            num /= 10;
            res++;
        }
        return res;
    }
    string largestNumber(vector<int>& nums) {
        bool allZero = true;
        for(int i : nums) {
            if (i != 0) { 
                allZero = false;
                break;
            }
        }
        if (allZero)  return "0";
        sort(nums.begin(), nums.end(), [&](int i, int j) {
            int idigits = getdigits(i);
            int jdigits = getdigits(j);
            long long a = i * pow(10, jdigits) + j;
            long long b = j * pow(10, idigits) + i;
            return a > b;
        });
        string res{""};
        for (int i : nums) {
            res += to_string(i);
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({3, 30, 34, 5, 9});
    cout << s.largestNumber(nums) << endl;
    return 0;
}
