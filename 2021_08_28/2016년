#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string ret = "";
    string day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0, idx = -1;
    
    while (++idx < a -1)
        sum += month[idx];
    
    sum += b - 1;
    ret = day[sum%7];
    return ret;
}
