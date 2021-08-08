#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> arr1 = { 1,2,3,4,5 };
    vector<int> arr2 = { 2,1,2,3,2,4,2,5 };
    vector<int> arr3 = { 3,3,1,1,2,2,4,4,5,5 };
    vector<int> cnt(3, 0);

    int i = 0;
    int max_cnt = 0;

    for (i = 0; i < answers.size(); ++i) {
        if (arr1[i % 5] == answers[i]) cnt[0]++;
        if (arr2[i % 8] == answers[i]) cnt[1]++;
        if (arr3[i % 10] == answers[i]) cnt[2]++;
    }

    for (i = 0; i < 3; ++i) max_cnt = max(max_cnt, cnt[i]);

    if (max_cnt == cnt[0]) answer.push_back(1);
    if (max_cnt == cnt[1]) answer.push_back(2);
    if (max_cnt == cnt[2]) answer.push_back(3);

    return answer;
}