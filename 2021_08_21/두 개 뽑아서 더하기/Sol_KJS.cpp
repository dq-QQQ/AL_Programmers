//문제풀이: https://githubseob.tistory.com/55

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    sort(numbers.begin(), numbers.end());
    int idx = 0;
    int idx2 = 0;
    for (idx = 0; idx < numbers.size() - 1; ++idx) {
        for (idx2 = idx + 1; idx2 < numbers.size(); ++idx2) {
            answer.push_back(numbers[idx] + numbers[idx2]);
        }
    }
    sort(answer.begin(), answer.end());

    for (idx = 0; idx < answer.size() - 1;) {
        if (answer[idx] == answer[idx + 1]) answer.erase(answer.begin() + idx + 1);
        else idx++;
    }
    return answer;
}