#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool ret = true;
    int idx = -1, cnt1 = 0, cnt2 = 0;
    
    while (++idx < s.size()){
        if (s[idx] == 'p' || s[idx] == 'P')
            cnt1++;
        if (s[idx] == 'y' || s[idx] == 'Y')
            cnt2++;
    }
    
    if (cnt1 == cnt2)
        return true;
    else
        return false;
}
