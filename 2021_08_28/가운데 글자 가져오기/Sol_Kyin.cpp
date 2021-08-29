#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string ret = "";
    
    if (s.size() % 2 == 1)
        ret.push_back(s[s.size() / 2]);
    else{
        ret.push_back(s[(s.size() / 2) - 1]);
        ret.push_back(s[s.size() / 2]);
    }
    return ret;
}
