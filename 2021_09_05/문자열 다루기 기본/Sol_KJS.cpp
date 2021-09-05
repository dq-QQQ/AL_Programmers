//문제풀이: https://githubseob.tistory.com/81

#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    int idx = 0;
    if (s.size() != 4 && s.size() != 6) return false;
    for (idx = 0; idx < s.size(); ++idx)
        if (s[idx] < 48 || s[idx]>57) return false;
    return true;
}