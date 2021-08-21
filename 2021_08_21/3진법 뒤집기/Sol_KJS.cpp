//문제풀이: https://githubseob.tistory.com/53

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int>ternary_scale;
    while (n > 0) {
        ternary_scale.push_back(n % 3);
        n /= 3;
    }
    int mul = 1;
    for (int idx = 0; idx < ternary_scale.size(); ++idx) {
        answer += (mul * ternary_scale[ternary_scale.size() - idx - 1]);
        mul *= 3;
    }
    return answer;
}