/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 내적                                   */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-15                            */
/* ********************************************** */


#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int ret = 0;
    int idx = -1;
    
    while (++idx < a.size()) 
        ret += a[idx] * b[idx];
    return ret;
}
