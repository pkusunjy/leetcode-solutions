#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int W;
        for (W = sqrt(area); W >= 1; W--) {
            if (area % W == 0)  break;
        }
        return vector<int>({area / W, W});
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> res = s.constructRectangle(4);
    printf("L = %d, W = %d\n", res[0], res[1]);
    return 0;
}
