//문제풀이: https://githubseob.tistory.com/51

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<double, int> a, pair<double, int> b) {
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> now_stage(N + 2, 0);
    vector<int>pass(N + 2, 0);

    int idx = 0;
    for (idx = 0; idx < stages.size(); ++idx)
        now_stage[stages[idx]]++;

    pass[N + 1] = now_stage[N + 1];

    for (idx = N; idx > 0; --idx)
        pass[idx] = now_stage[idx] + pass[idx + 1];

    vector<pair<double, int>> failure_late;

    for (idx = 1; idx <= N; ++idx) {
        if (pass[idx] != 0)
            failure_late.push_back({ (double)now_stage[idx] / pass[idx], idx });
        else
            failure_late.push_back({ 0, idx });
    }

    stable_sort(failure_late.begin(), failure_late.end(), compare);

    for (idx = 0; idx < N; ++idx)
        answer.push_back(failure_late[idx].second);

    return answer;
}