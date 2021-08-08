/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 키패드 누르기                            */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-08                            */
/* ********************************************** */

#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void get_loc(vector<int>& curr, vector<vector<int>> board, int num);
char L_or_R(vector<int>& leftcurr, vector<int>& rightcurr,vector<vector<int>> board, int num, string hand);

string solution(vector<int> numbers, string hand) {
    string ret = "";
    vector<vector<int>> boards = {{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
    vector<int> curr_L = {3,0};
    vector<int> curr_R = {3,2};
    int idx = -1;
    
    while (++idx < numbers.size()){
        switch (numbers[idx]){
            case 1: ret.push_back('L'); get_loc(curr_L, boards, 1);   break;
            case 2: ret.push_back(L_or_R(curr_L, curr_R, boards, 2, hand)); break;
            case 3: ret.push_back('R'); get_loc(curr_R, boards, 3);   break;
            case 4: ret.push_back('L'); get_loc(curr_L, boards, 4);   break;
            case 5: ret.push_back(L_or_R(curr_L, curr_R,boards, 5, hand)); break;
            case 6: ret.push_back('R'); get_loc(curr_R, boards, 6);   break;
            case 7: ret.push_back('L'); get_loc(curr_L, boards, 7);   break;
            case 8: ret.push_back(L_or_R(curr_L, curr_R,boards, 8, hand)); break;
            case 9: ret.push_back('R'); get_loc(curr_R, boards, 9);   break;
            case 0: ret.push_back(L_or_R(curr_L, curr_R,boards, 0, hand)); break;
        }
    }
    return ret;
}

void get_loc(vector<int>& curr, vector<vector<int>> board, int num){
    int idx1 = -1, idx2;
    
    while (++idx1 < 4){
        idx2 = -1;
        while (++idx2 < 3){
            if (num == board[idx1][idx2]){
                curr[0] = idx1;
                curr[1] = idx2;
                return ;
            }
        }
    }
}

char L_or_R(vector<int>& leftcurr, vector<int>& rightcurr, vector<vector<int>> board, int num, string hand){
    int num_x, num_y, tmp;
    int diff_L, diff_R;
    char ret;
    switch (num){
        case 2: tmp = 2; num_x = 0; num_y = 1; break;
        case 5: tmp = 5; num_x = 1; num_y = 1; break;
        case 8: tmp = 8; num_x = 2; num_y = 1; break;
        case 0: tmp = 0; num_x = 3; num_y = 1; break;
    }
    diff_L = abs(leftcurr[0] - num_x) + abs(leftcurr[1] - num_y);
    diff_R = abs(rightcurr[0] - num_x) + abs(rightcurr[1] - num_y);

    if (diff_L == diff_R) ret = (hand == "left")  ? 'L' : 'R';
    else                  ret = (diff_L > diff_R) ? 'R' : 'L';
    
    (ret == 'R') ?  get_loc(rightcurr, board, tmp) : get_loc(leftcurr, board, tmp);
    return (ret);
}
