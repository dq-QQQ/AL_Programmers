#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string ret = "";
    int idx = -1;
    
    while (++idx < n){
        if (idx % 2)
            ret += "박";
        else
            ret += "수";
    }
    return ret;
}
