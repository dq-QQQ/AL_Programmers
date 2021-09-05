#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool solution(string s) {
    int idx = -1;
    
    if(s.size() != 4 && s.size() != 6)
        return false;
    
    while (++idx < s.size()){
        if (!isdigit(s[idx]))
            return false;
    }
    return true;
}
