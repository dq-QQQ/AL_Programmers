#include <string>
#include <vector>
#include <iostream>
#include <cmath>


using namespace std;

int    ft_find_next_prime(int nb);

int solution(int n) {
    int ret = 0, idx = 3;

    if (n == 2)
        return (1);
    ret++;
    while (idx <= n){
        idx = ft_find_next_prime(idx);
        ret++;
    }
    return ret;
}

int    ft_find_next_prime(int nb){
    unsigned int    i;

    if (nb % 2 == 0)
        nb++;
    i = 1;
    while (i * i <= (unsigned int)nb)
    {
        if (nb % i == 0)
        {
            nb += 2;
            i = 1;
        }
        i += 2;
    }
    return (nb);
}
