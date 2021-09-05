//문제풀이: https://githubseob.tistory.com/77

#include <string>
#include <algorithm>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int idx = 0;
    if (a > b) swap(a, b);
    for (idx = a; idx <= b; ++idx)
        answer += idx;
    return answer;
}