/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : K번째수                                 */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-15                            */
/* ********************************************** */

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> ret;
    vector<int> tmp;
    int idx = -1, idx_arr;
    while (++idx < commands.size()){
        tmp.clear();
        idx_arr = commands[idx][0] - 2;
        while (++idx_arr < commands[idx][1])
            tmp.push_back(array[idx_arr]);
        sort(tmp.begin(), tmp.end());
        ret.push_back(tmp[commands[idx][2] - 1]);
    }

    return ret;
}
