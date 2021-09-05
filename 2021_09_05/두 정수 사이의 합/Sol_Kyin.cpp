#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long ret = 0;
    int idx;
    
    if (a > b)
        swap(a,b);
    idx = a;
    while (idx <= b){
        ret += idx;
        idx++;
    }
    return ret;
}
