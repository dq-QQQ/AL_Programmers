//문제풀이: https://githubseob.tistory.com/37

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); ++i) {
        vector<int>number;
        for (int j = commands[i][0] - 1; j < commands[i][1]; ++j)
            number.push_back(array[j]);
        sort(number.begin(), number.end());
        answer.push_back(number[commands[i][2] - 1]);
    }

    return answer;
}