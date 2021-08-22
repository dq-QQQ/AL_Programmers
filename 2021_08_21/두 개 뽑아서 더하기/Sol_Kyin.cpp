/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 두 개 뽑아서 더하기                       */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-21                            */
/* ********************************************** */


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num) {
    vector<int> ret;
    int idx1 = -1, idx2;
    
    //sort (num.begin(), num.end());
    
    while (++idx1 < num.size()){
        idx2 = idx1;
        while (++idx2 < num.size()){
            if (find(ret.begin(), ret.end(), num[idx1] + num[idx2]) - ret.end() == 0)
                ret.push_back(num[idx1] + num[idx2]);                
        }
    }
    sort (ret.begin(), ret.end());
    
    return ret;
}
