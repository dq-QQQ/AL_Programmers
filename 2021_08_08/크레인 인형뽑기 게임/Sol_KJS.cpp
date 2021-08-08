#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    vector<int> basket;
    int answer = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < moves.size(); ++i) {
        int col = moves[i] - 1;
        for (j = 0; j < board.size(); ++j) {
            if (board[j][col] != 0) {
                basket.push_back(board[j][col]);
                board[j][col] = 0;
                if (basket.size() >= 2) {
                    if (basket[basket.size() - 1] == basket[basket.size() - 2]) {
                        answer += 2;
                        basket.pop_back();
                        basket.pop_back();
                    }
                }
                break;
            }

        }
    }
    return answer;
}