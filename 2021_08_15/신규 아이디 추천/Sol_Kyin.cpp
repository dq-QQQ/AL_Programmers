/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 신규 아이디 추천                          */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-15                            */
/* ********************************************** */

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

string solution(string new_id) {
    string ret = "";
    int idx = -1;
    
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    
    while (new_id[++idx]){
        if(islower(new_id[idx]) || isdigit(new_id[idx])
           || new_id[idx] == '-'|| new_id[idx] == '_' || new_id[idx] == '.'
          )
            ret.push_back(new_id[idx]);
        if (idx >= 1)
            if (ret[ret.size() - 1] == '.' && ret[ret.size() - 2] == '.')
                ret.pop_back();
    }
  
    if (ret.front() == '.') ret.erase(ret.begin());
    if (ret.back() == '.')ret.pop_back();
    if(ret.empty()) ret = "a";
    if(ret.size() >= 16)  ret = ret.substr(0, 15);
    if(ret.back() == '.') ret.pop_back();
    while(ret.size() <= 2) ret.push_back(ret.back());  
    return ret;
}
