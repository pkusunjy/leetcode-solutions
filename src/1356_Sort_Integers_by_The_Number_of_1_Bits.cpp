#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](const int& a, const int& b) -> bool {
            bitset<64> ba(a);
            bitset<64> bb(b);
            if(ba.count() == bb.count()) {
                return a < b;
            }
            return ba.count() < bb.count();
        });
        return arr;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> res = s.sortByBits(arr);
    for(int i = 0; i <res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    arr = {1024,512,256,128,64,32,16,8,4,2,1};
    res = s.sortByBits(arr);
    for(int i = 0; i <res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}