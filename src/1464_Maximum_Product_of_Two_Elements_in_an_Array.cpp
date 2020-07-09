#include "global.hpp"
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> buckets(1000, 0);
        for_each(nums.begin(), nums.end(), [&](const int& n){buckets[n-1]++;});
        for(int i = 999; i >= 0; i--) {
            if(buckets[i] != 0) {
                if(buckets[i] >= 2) {
                    return i * i;
                }
                for(int j = i - 1; j >= 0; j--) {
                    if(buckets[j] != 0) {
                        return i * j;
                    }
                }
            }
        }
        return 0;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums({3, 4, 5, 2});
    cout << s.maxProduct(nums) << endl;
    return 0;
}