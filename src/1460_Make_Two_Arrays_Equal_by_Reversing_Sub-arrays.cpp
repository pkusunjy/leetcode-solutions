#include "global.hpp"
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size() != arr.size())  return false;
        set<int> st, sa;
        int n = target.size();
        for(int i = 0; i < n; i++) {
            st.insert(target[i]);
            sa.insert(arr[i]);
        }
        for(set<int>::iterator it1 = st.begin(), it2 = sa.begin(); it1 != st.end(); it1++, it2++) {
            if(*it1 != *it2)  return false;
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> target({1, 2, 3, 4});
    vector<int> arr({2, 4, 1, 3});
    cout << s.canBeEqual(target, arr) << endl;
    return 0;
}
