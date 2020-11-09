#include "global.hpp"
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> balloon(5);
        for (const char& c : text) {
            if (m.find(c) != m.end()) {
                balloon[m[c]]++;
            }
        }
        balloon[2] /= 2;
        balloon[3] /= 2;
        return *min_element(balloon.begin(), balloon.end());
    }
private:
    map<char, int> m = {
        {'b', 0},
        {'a', 1},
        {'l', 2},
        {'o', 3},
        {'n', 4}
    };
};

int main() {
    Solution s;
    cout << s.maxNumberOfBalloons("nlaebolko") << endl;
    return 0;
}
