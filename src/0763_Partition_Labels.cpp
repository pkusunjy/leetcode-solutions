#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> counts(26, 0);
        for (int i = 0; i < S.size(); i++) {
            counts[S[i] - 'a'] = i;
        }
        vector<int> res;
        int start = 0;
        int end = 0;
        for (int i = 0; i < S.size(); i++) {
            end = max(end, counts[S[i] - 'a']);
            if (i == end) {
                res.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> res = s.partitionLabels("ababcbacadefegdehijhklij");
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}
