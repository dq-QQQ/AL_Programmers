//문제풀이: https://githubseob.tistory.com/83

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool>check(n + 1, true);
    int idx = 0, idx2 = 0;
    for (idx = 2; idx <= sqrt(n); ++idx)
        for (idx2 = 2; idx * idx2 <= n; ++idx2)
            check[idx * idx2] = false;

    for (idx = 2; idx <= n; ++idx)
        if (check[idx] == true) answer++;
    return answer;
}