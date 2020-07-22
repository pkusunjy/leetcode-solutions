#include "global.hpp"
using namespace std;

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> m;
        for(int i = 0; i < cpdomains.size(); i++) {
            string num_domain = cpdomains[i];
            string domain;
            int cnt = 0;
            for(int j = 0; j < num_domain.size(); j++) {
                if(num_domain[j] == ' ') {
                    cnt = stoi(num_domain.substr(0, j));
                    domain = num_domain.substr(j + 1, num_domain.size());
                    m[domain] += cnt;
                }
                if(num_domain[j] == '.') {
                    domain = num_domain.substr(j + 1, num_domain.size());
                    m[domain] += cnt;
                }
            }
        }
        vector<string> res;
        for(auto p: m) {
            res.push_back(to_string(p.second) + " " + p.first);
        }
        return res;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<string> cpdomains = {"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
    vector<string> res = s.subdomainVisits(cpdomains);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}