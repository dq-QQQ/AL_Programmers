/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 3진법 뒤집기                             */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-21                            */
/* ********************************************** */

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int Reverse_Trit(int n);

int solution(int n) {
    int ret = 0;
    
    ret = Reverse_Trit(n);
    
    return ret;
}

int Reverse_Trit(int n){
    vector <int> trit;
    int idx, ret = 0, digit = 1;
    
    //making trit
    while (n >= 1){
        trit.push_back(n % 3);
        n /= 3;
    }
    
    idx = trit.size();
    
    while (--idx >= 0){
        ret += trit[idx] * digit;
        digit *= 3;
    }
    
    return ret;
}
