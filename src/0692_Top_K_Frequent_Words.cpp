#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> strtoi;
        for (const string& str : words) {
            if (strtoi.find(str) == strtoi.end()) {
                strtoi.insert(make_pair(str, 1));
            }
            else {
                strtoi[str]++;
            }
        }
        vector<pair<string, int>> vec;
        for (const pair<string, int>& p : strtoi) {
            vec.push_back(p);
        }
        sort(vec.begin(), vec.end(), [&] (const pair<string, int>& p1, const pair<string, int>& p2) {
            if (p1.second == p2.second) {
                return p1.first < p2.first;
            }
            else {
                return p1.second > p2.second;
            }
        });
        vector<string> res;
        for (int i = 0; i < k; i++) {
            res.push_back(vec[i].first);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<string> words({"i", "love", "leetcode", "i", "love", "coding"});
    vector<string> res = s.topKFrequent(words, 2);
    for (auto str : res) {
        cout << str << endl;
    }
    return 0;
}
