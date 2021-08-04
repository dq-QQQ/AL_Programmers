/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 로또의 최고 순위와 최저 순위                 */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-01                            */
/* ********************************************** */


#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int my_idx = -1 , win_idx;
    int wrong_cnt = 0, zero_cnt = 0;
    
    while (++my_idx < lottos.size()){
        win_idx = -1;
        if (lottos[my_idx] == 0)    zero_cnt++;
        while (++win_idx < win_nums.size()){
            if (lottos[my_idx] == win_nums[win_idx])
                break;
        }
        if (win_idx == win_nums.size())
            wrong_cnt++;
    }
    
    if (wrong_cnt == 6){
        if (zero_cnt == 6)
            answer.push_back(wrong_cnt- zero_cnt + 1);
        else
            answer.push_back(wrong_cnt- zero_cnt);
        
        answer.push_back(wrong_cnt);
    }
    else {
        answer.push_back(wrong_cnt- zero_cnt + 1);
        answer.push_back(wrong_cnt + 1);
    }
    return answer;
}
