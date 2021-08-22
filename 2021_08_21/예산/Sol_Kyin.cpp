/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 예산                                   */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-21                            */
/* ********************************************** */

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int ret = 0, idx = -1;
    
    sort (d.begin(), d.end());
    
    while (++idx < d.size()){
        if (budget - d[idx] < 0)
            break;
        ret++;
        budget -= d[idx];
    }
    return ret;
}
