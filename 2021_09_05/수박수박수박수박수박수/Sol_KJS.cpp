//문제풀이: https://githubseob.tistory.com/84

#include <string>
#include <vector>
using namespace std;

string solution(int n) {
    string answer = "";
    for (int idx = 0; idx < n; ++idx) {
        if (idx % 2 == 0) answer += "수";
        else answer += "박";
    }
    return answer;
}