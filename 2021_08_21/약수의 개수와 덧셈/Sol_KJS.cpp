//문제풀이: https://githubseob.tistory.com/52

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    for (int idx = left; idx <= right; ++idx) {
        if ((double)sqrt(idx) - (int)sqrt(idx) == 0) answer -= idx;
        else answer += idx;
    }

    return answer;
}