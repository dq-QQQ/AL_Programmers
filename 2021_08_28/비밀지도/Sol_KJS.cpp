//문제풀이: https://githubseob.tistory.com/64

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    int idx = 0;
    int idx2 = 0;

    for (idx = 0; idx < n; ++idx) {
        string input = "";
        arr1[idx] |= arr2[idx];
        for (idx2 = n - 1; idx2 >= 0; --idx2) {
            if (arr1[idx] & (1 << idx2))
                input += '#';
            else input += ' ';
        }
        answer.push_back(input);
    }

    return answer;
}