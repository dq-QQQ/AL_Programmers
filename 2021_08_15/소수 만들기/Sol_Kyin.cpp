/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 소수 만들기                              */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-15                            */
/* ********************************************** */

#include <vector>
#include <iostream>
using namespace std;

int ft_is_prime(int nb);

int solution(vector<int> nums) {
    int ret = 0, idx1 = -1, idx2, idx3;

    while (++idx1 < nums.size() - 2){
        idx2 = idx1;
        while (++idx2 < nums.size() - 1){
            idx3 = idx2;
            while (++idx3 < nums.size()){
                if(ft_is_prime(nums[idx1] + nums[idx2] + nums[idx3])) ret++;
            }
        }
    }

    return ret;
}

int ft_is_prime(int nb){
    int idx = 2;

    while (nb % idx)
    {
        if (idx > nb)
            break ;
        idx++;
    }
    if (nb == idx)
        return (1);
    return (0);
}
