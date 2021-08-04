/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 행렬의 덧셈                              */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-01                            */
/* ********************************************** */

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> tmp;
    int idx1 = -1, idx2;
    
    while (++idx1 < arr1.size()){
        tmp.clear();
        idx2 = -1;
        while (++idx2 < arr1[0].size()){
            tmp.push_back(arr1[idx1][idx2] + arr2[idx1][idx2]);
        }
        answer.push_back(tmp);
    }
    return answer;
}
