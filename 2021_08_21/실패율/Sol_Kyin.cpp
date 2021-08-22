/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 실패율                                 */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-21                            */
/* ********************************************** */

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> ret;
    vector<float> tmp;
    int idx1 = 0, idx2, cnt;
    float total = stages.size();
    
    while (++idx1 <= N){
        cnt = 0;
        idx2 = -1;
        while(++idx2 < stages.size())
            if (stages[idx2] == idx1)
                cnt++;
        if(cnt == 0)
            tmp.push_back(0);
        else
            tmp.push_back(cnt / total);
        total -= cnt;
    }
    
    idx1 = -1;
    
    while (++idx1 < tmp.size()){
        auto buf = max_element(tmp.begin(), tmp.end());
        ret.push_back(buf - tmp.begin() + 1);
        *buf = -1;
    }
    return ret;
}
