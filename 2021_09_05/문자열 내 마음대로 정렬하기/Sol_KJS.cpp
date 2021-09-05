//문제풀이: https://githubseob.tistory.com/78

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int idx;

bool compare(string s1, string s2) {
    if (s1[idx] < s2[idx])
        return true;
    else if (s1[idx] == s2[idx])
        return s1 < s2;
    else return false;
}

vector<string> solution(vector<string> strings, int n) {
    idx = n;
    sort(strings.begin(), strings.end(), compare);

    return strings;
}