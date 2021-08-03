#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int win = 0;
    int zero = 0;
    int x = 0, x2 = 0;
    for (x = 0; x < 6; ++x) {
        if (lottos[x] == 0) zero++;
        else {
            for (x2 = 0; x2 < 6; ++x2) {
                if (lottos[x] == win_nums[x2]) {
                    win++;
                    break;
                }
            }
        }
    }
    if ((win + zero) >= 2) answer.push_back(7 - (win + zero));
    else answer.push_back(6);
    if (win >= 2) answer.push_back(7 - win);
    else answer.push_back(6);

    return answer;
}