#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while(i < j && numbers[i] + numbers[j] != target) {
            if(numbers[i] + numbers[j] < target) {
                i++;
            } else {
                j--;
            }
        }
        return vector<int>({i + 1, j + 1});
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> numbers({2, 7, 11, 15});
    int target = 9;
    vector<int> res = s.twoSum(numbers, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}