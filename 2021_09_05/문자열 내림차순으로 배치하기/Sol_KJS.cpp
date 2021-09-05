//문제풀이: https://githubseob.tistory.com/80

#include <string>
#include <algorithm>
using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), greater<>());
    return s;
}