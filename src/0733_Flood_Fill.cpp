#include "global.hpp"
using namespace std;

class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)  return;
        int pixVal = image[sr][sc];
        image[sr][sc] = newColor;
        if(sr > 0 && image[sr-1][sc] == pixVal) {
            fill(image, sr - 1, sc, newColor);
        }
        if(sr < image.size() - 1 && image[sr+1][sc] == pixVal) {
            fill(image, sr + 1, sc, newColor);
        }
        if(sc > 0 && image[sr][sc-1] == pixVal) {
            fill(image, sr, sc - 1, newColor);
        }
        if(sc < image[0].size() - 1 && image[sr][sc+1] == pixVal) {
            fill(image, sr, sc + 1, newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fill(image, sr, sc, newColor);
        return image;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    s.fill(image, 1, 1, 2);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}