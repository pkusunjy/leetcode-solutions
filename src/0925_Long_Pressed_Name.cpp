#include "global.hpp"
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int len1 = name.size();
        int len2 = typed.size();
        int i{0}, j{0};
        if (name[0] != typed[0])  return false;
        while (i < len1 && j < len2) {
            if (name[i] == typed[j]) {
                i++;
                j++;
            }
            else if (name[i - 1] != typed[j])  return false;
            else j++;
        }
        if (i != len1)  return false;
        i--;
        j--;
        while (j < len2) {
            if (typed[j] != name[i])  return false;
            j++;
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.isLongPressedName("alex", "aaleex") << endl;
    return 0;
}
