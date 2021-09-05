//문제풀이: https://githubseob.tistory.com/82

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for (int idx = 0; idx < seoul.size(); ++idx) {
        if (seoul[idx] == "Kim") {
            answer = "김서방은 " + to_string(idx) + "에 있다";
            return answer;
        }
    }
}