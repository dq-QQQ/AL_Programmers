/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 음양 더하기                              */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-08                            */
/* ********************************************** */

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int ret = 0;
    int idx = -1;
    
    while (++idx < absolutes.size())
        ret += ((signs[idx] == true) ? 1 : -1) * absolutes[idx];
    return ret;
}
