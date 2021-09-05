#include <string>
#include <cctype>
#include <iostream>
#include <cstdlib>


using namespace std;

void cal_res(string str, int *p1, int *p2, int *p3, int cnt);

int solution(string dartResult) {
    int S_Idx = 0, tmp = 1, res1 = 0, res2 = 0, res3 = 0, cnt = 0;
    string point;

    while (++cnt <= 3){
        while (dartResult[S_Idx + tmp] != '\0'){
                    if (isdigit(dartResult[S_Idx + tmp])){
                        if (dartResult[S_Idx + tmp - 1] == '1')
                            tmp++;
                        else{
                            break;
                        }
                    }
                    else
                        tmp++;
        }
        point = dartResult.substr(S_Idx, tmp);
        cal_res(point, &res1, &res2, &res3, cnt);
        point.clear();
        S_Idx += tmp;
        tmp = 1;
    }
    return (res1 + res2 + res3);
}

void cal_res(string str, int *res1, int *res2, int *res3, int cnt){
    int idx = -1, tmp = 0;

    while (++idx < str.size()){
        if (isdigit(str[idx])){
            if (str[idx] == '1' && str[idx + 1] == '0'){
                tmp = 10;
                idx++;
                continue;
            }
            else
                tmp = str[idx] - 48;
        }
        if (str[idx] == 'S')
            continue;
        if (str[idx] == 'D')
            tmp *= tmp;
        if (str[idx] == 'T')
            tmp *= tmp * tmp;
        if (str[idx] == '*'){
            if (cnt == 1)
                tmp *= 2;
            else if (cnt == 2){
                *res1 *= 2;
                tmp *= 2;
            }
            else if (cnt == 3){
                *res2 *= 2;
                tmp *= 2;
            }
        }
        if (str[idx] == '#')
            tmp *= -1;
    }
    if (cnt == 1)
        *res1 = tmp;
    else if (cnt == 2)
        *res2 = tmp;
    else
        *res3 = tmp;
}
