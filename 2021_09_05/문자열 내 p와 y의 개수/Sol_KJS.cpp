//문제풀이: https://githubseob.tistory.com/79

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int idx = 0;
    int p = 0, y = 0;
    for (idx = 0; idx < s.size(); ++idx) {
        if (s[idx] == 'p' || s[idx] == 'P')
            p++;
        else if (s[idx] == 'y' || s[idx] == 'Y')
            y++;
    }
    if (p != y) answer = false;

    return answer;
}