//문제풀이: https://githubseob.tistory.com/60

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int>month = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    vector<string>day = { "FRI","SAT","SUN","MON","TUE","WED","THU" };

    int dday = b - 1;
    for (int idx = 0; idx <= a - 2; ++idx)
        dday += month[idx];

    return day[(dday) % 7];
}