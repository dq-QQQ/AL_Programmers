/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 폰켓몬                                  */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-21                            */
/* ********************************************** */

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int ret = 0, idx = -1;
    
    sort (nums.begin(), nums.end());
    
    while (++idx < nums.size()){
        if (ret == nums.size() / 2) break;
        if (nums[idx] != nums[idx + 1])
            ret++;
    }
    return ret;
}
