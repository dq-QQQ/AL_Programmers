/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 크레인 인형뽑기 게임                       */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-08                            */
/* ********************************************** */

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int ret = 0;
    int idx_m = -1, idx_b;
    vector<int> tmp;
    
    while (++idx_m < moves.size()){
        idx_b = -1;
        while (++idx_b < board.size()){
            if (board[idx_b][moves[idx_m] - 1] == 0) continue;
            else                                     break;
        }
        if (idx_b != board.size()){
            tmp.push_back(board[idx_b][moves[idx_m] - 1]);
            board[idx_b][moves[idx_m] - 1] = 0;
            if (tmp[tmp.size() - 1] == tmp[tmp.size() - 2]){
                tmp.pop_back();
                tmp.pop_back();
                ret++;
            }
        }
    }
    return ret * 2;
}
