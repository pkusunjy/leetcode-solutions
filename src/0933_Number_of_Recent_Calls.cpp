#include "global.hpp"
using namespace std;

class RecentCounter {
public:
    RecentCounter() {

    }
    
    int ping(int t) {
        q.push(t);
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        return q.size();
    }
private:
    queue<int> q;
};

int main(int argc, char* argv[]) {
    RecentCounter* cntr = new RecentCounter();
    cout << cntr->ping(1) << endl;
    cout << cntr->ping(2) << endl;
    cout << cntr->ping(3001) << endl;
    cout << cntr->ping(3002) << endl;
    delete cntr;
    return 0;
}
