#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string ret = s;
    
    sort(ret.begin(), ret.end(), greater<char>());
    
    return ret;
}
