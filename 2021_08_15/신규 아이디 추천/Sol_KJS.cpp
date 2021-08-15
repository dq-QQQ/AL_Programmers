//문제풀이: https://githubseob.tistory.com/41

#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for (int i = 0; i < new_id.size(); ++i) {
        new_id[i] = tolower(new_id[i]);
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '_' || new_id[i] == '.' || new_id[i] == '-')
            answer.push_back(new_id[i]);
        if (i >= 1)
            if (answer[answer.size() - 1] == '.' && answer[answer.size() - 2] == '.')
                answer.pop_back();
    }
    if (answer.front() == '.') answer.erase(answer.begin());
    if (answer.back() == '.')answer.pop_back();
    if (answer.empty()) answer.push_back('a');
    if (answer.size() >= 16) answer.resize(15);
    if (answer.back() == '.') answer.pop_back();
    while (answer.size() < 3)  answer.push_back(answer.back());

    return answer;
}