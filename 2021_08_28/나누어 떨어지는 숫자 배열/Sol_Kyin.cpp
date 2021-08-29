#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> ret;
    int idx = -1;
    
    sort(arr.begin(), arr.end());
    
    while (++idx < arr.size())
        if (arr[idx] % divisor == 0)
            ret.push_back(arr[idx]);
    if (ret.size() == 0)
        ret.push_back(-1);
    return ret;
}
