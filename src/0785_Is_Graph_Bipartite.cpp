#include "global.hpp"
using namespace std;

class Solution {
public:
    void dfs(int idx, int c, vector<vector<int>>& graph) {
        color[idx] = c;
        int neighborColor = (c == 1 ? 2 : 1);
        for(int neighbor: graph[idx]) {
            if(color[neighbor] == 0) {
                dfs(neighbor, neighborColor, graph);
                if(!valid) {
                    return;
                }
            }
            else if(color[neighbor] != neighborColor) {
                valid = false;
                return;
            }
        }
    }
    bool isBipartite(vector<vector<int>>& graph) {
        valid = true;
        color = vector<int>(graph.size(), 0);
        for(int i = 0; i < graph.size(); i++) {
            if(color[i] == 0) {
                dfs(i, 1, graph);
            }
        }
        return valid;
    }
private:
    vector<int> color;
    bool valid;
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> graph = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};
    cout << s.isBipartite(graph) << endl;
    graph = {{1, 2, 3}, {0, 2}, {0, 1, 3}, {0, 2}};
    cout << s.isBipartite(graph) << endl;
    return 0;
}