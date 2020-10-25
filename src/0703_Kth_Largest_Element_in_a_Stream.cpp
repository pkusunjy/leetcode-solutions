#include "global.hpp"
using namespace std;

class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        _k = k;
        for (int i = 0; i < k && i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        if (k < nums.size()) {
            for (int i = k; i < nums.size(); i++) {
                pq.push(nums[i]);
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        if (pq.size() < _k) {
            pq.push(val);
        }
        else if (val > pq.top()) {
            pq.push(val);
            pq.pop();
        }
        return pq.top();
    }
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int _k;
};

int main() {
    vector<int> nums({4, 5, 8, 2});
    KthLargest* kthLargest = new KthLargest(3, nums);
    cout << kthLargest->add(3) << endl;
    cout << kthLargest->add(5) << endl;
    cout << kthLargest->add(10) << endl;
    cout << kthLargest->add(9) << endl;
    cout << kthLargest->add(4) << endl;
    delete kthLargest;
    return 0;
}
