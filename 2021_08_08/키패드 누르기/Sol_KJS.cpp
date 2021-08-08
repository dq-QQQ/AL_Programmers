#include <string>
#include <vector>
#include <cmath>

using namespace std;

int left_num = 10;
int right_num = 11;
int left_y;
int left_x;
int right_y;
int right_x;
vector<vector<int>>keypad = { {1,2,3},{4,5,6},{7,8,9},{10,0,11} };

void Find() {
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 3; ++x) {
            if (keypad[y][x] == left_num) {
                left_y = y;
                left_x = x;
            }
            if (keypad[y][x] == right_num) {
                right_y = y;
                right_x = x;
            }
        }
    }
}


string solution(vector<int> numbers, string hand) {
    string answer = "";

    int dis_l = 0;
    int dis_r = 0;


    for (int i = 0; i < numbers.size(); ++i) {
        Find();
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            left_num = numbers[i];
            answer.push_back('L');
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            right_num = numbers[i];
            answer.push_back('R');
        }
        else {
            dis_l = 0;
            dis_r = 0;
            for (int y = 0; y < 4; ++y) {
                for (int x = 0; x < 3; ++x) {
                    if (numbers[i] == keypad[y][x]) {

                        dis_l = abs(x - left_x) + abs(y - left_y);
                        dis_r = abs(x - right_x) + abs(y - right_y);


                        if (dis_l == dis_r) {
                            if (hand[0] == 'l') {
                                left_num = numbers[i];
                                answer.push_back('L');
                            }
                            else {
                                right_num = numbers[i];
                                answer.push_back('R');
                            }
                        }
                        else if (dis_l > dis_r) {
                            right_num = numbers[i];
                            answer.push_back('R');
                        }
                        else {
                            left_num = numbers[i];
                            answer.push_back('L');
                        }
                        break;
                    }
                }
            }
        }
    }
    return answer;
}