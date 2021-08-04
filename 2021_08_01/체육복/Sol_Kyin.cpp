#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    int lost_idx = -1, rsv_idx;
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    while (++lost_idx < lost.size()){
        rsv_idx = -1;
        while (++rsv_idx < reserve.size()){
            if (lost[lost_idx] == reserve[rsv_idx]){
                lost[lost_idx] = -3;
                reserve[rsv_idx] = -1;
            }
        }
    }
    
    lost_idx = -1;
    while (++lost_idx < lost.size()){
        if (lost[lost_idx] == -3)
            continue;
        rsv_idx = -1;
        while (++rsv_idx < reserve.size()){
            if (lost[lost_idx] + 1 == reserve[rsv_idx] 
                || lost[lost_idx] - 1 == reserve[rsv_idx]){
                reserve[rsv_idx] = -1;
                break;
            }
        }
        if (rsv_idx == reserve.size())  answer--;
    }
    return answer;
}
