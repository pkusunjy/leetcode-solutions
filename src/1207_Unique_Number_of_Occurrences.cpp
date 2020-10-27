#include "global.hpp"
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> bucket(2001, 0);
        for(int i : arr) {
            bucket[i + 1000]++;
        }
        set<int> st;
        for (int i : bucket) {
            if (i != 0) {
                if (st.find(i) != st.end()) {
                    return false;
                }
                st.insert(i);
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> arr({-3,0,1,-3,1,1,1,-3,10,0});
    cout << s.uniqueOccurrences(arr) << endl;
    return 0;
}
