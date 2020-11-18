#include "global.hpp"
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i = 0;
        while (i < gas.size()) {
            int sum_gas = 0;
            int sum_cost = 0;
            int cnt = 0;
            while (cnt < gas.size()) {
                int j = (i + cnt) % gas.size();
                sum_gas += gas[j];
                sum_cost += cost[j];
                if (sum_cost > sum_gas)  break;
                cnt++;
            }
            if (cnt == gas.size()) {
                return i;
            }
            else {
                i = i + cnt + 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> gas({1, 2, 3, 4, 5});
    vector<int> cost({3, 4, 5, 1, 2});
    Solution s;
    cout << s.canCompleteCircuit(gas, cost) << endl;
    return 0;
}