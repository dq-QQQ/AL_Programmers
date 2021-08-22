/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 약수의 개수와 덧셈                        */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-21                            */
/* ********************************************** */

#include <string>
#include <vector>

using namespace std;

int discriminate(int n);

int solution(int left, int right) {
    int ret = 0, idx = left - 1;
    
    while (++idx <= right){
        if (discriminate(idx))
            ret += idx;
        else
            ret -= idx;
    }
    return ret;
}

int discriminate(int n){
    int idx = 0, ret = 0;
    
    while (++idx <= n){
        if ((n % idx) == 0)
            ret++;
    }
    if (ret % 2 == 0)
        return 1;
    else
        return 0;
}
