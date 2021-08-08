#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> ret;
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {2,1,2,3,2,4,2,5};
    vector<int> v3 = {3,3,1,1,2,2,4,4,5,5};
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, maximum = 0;
    int idx_a = -1;
    
    while (++idx_a < answers.size()){
        if (answers[idx_a] == v1[idx_a % 5])  cnt1++;
        if (answers[idx_a] == v2[idx_a % 8])  cnt2++;
        if (answers[idx_a] == v3[idx_a % 10]) cnt3++;
    }
    
    maximum = (cnt1 > cnt2 && cnt1 > cnt3) ? cnt1 : (cnt2 > cnt3) ? cnt2 : cnt3;
    if (maximum == cnt1)  ret.push_back(1);
    if (maximum == cnt2)  ret.push_back(2);
    if (maximum == cnt3)  ret.push_back(3);
    return ret;
}
