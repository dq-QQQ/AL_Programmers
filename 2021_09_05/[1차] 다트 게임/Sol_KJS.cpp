//문제풀이: https://githubseob.tistory.com/76

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int idx = 0;
    int answer = 0;
    vector<int> score;

    while (idx < dartResult.size()) {
        if (dartResult[idx] == '1') {
            if (dartResult[idx + 1] == '0') {
                score.push_back(10);
                ++idx;
            }
            else score.push_back(1);
        }
        else  score.push_back(dartResult[idx] - '0');

        ++idx;
        if (dartResult[idx] == 'S')
            score[score.size() - 1] = pow(score[score.size() - 1], 1);
        else if (dartResult[idx] == 'D')
            score[score.size() - 1] = pow(score[score.size() - 1], 2);
        else if (dartResult[idx] == 'T')
            score[score.size() - 1] = pow(score[score.size() - 1], 3);
        ++idx;
        if (dartResult[idx] == '*') {
            score[score.size() - 1] *= 2;
            score[score.size() - 2] *= 2;
            ++idx;
        }
        else if (dartResult[idx] == '#') {
            score[score.size() - 1] *= -1;
            ++idx;
        }
    }

    for (idx = 0; idx < score.size(); ++idx)
        answer += score[idx];
    return answer;
}