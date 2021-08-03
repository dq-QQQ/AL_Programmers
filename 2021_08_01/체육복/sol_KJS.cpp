#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int l = 0, r = 0;
    answer = n - lost.size();
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (l = 0; l < lost.size(); ++l) {
        for (r = 0; r < reserve.size(); ++r) {
            if (lost[l] == reserve[r]) {
                answer++;
                lost[l] = 0;
                reserve[r] = 0;
            }
        }
    }
    for (l = 0; l < lost.size(); ++l) {
        for (r = 0; r < reserve.size(); ++r) {
            if (lost[l] != 0 && reserve[r] != 0) {
                if (lost[l] - 1 == reserve[r]||lost[l]+1==reserve[r]) {
                    reserve[r] = 0;
                    answer++;
                    break;
                }
            }
        }
    }
    return answer;
}