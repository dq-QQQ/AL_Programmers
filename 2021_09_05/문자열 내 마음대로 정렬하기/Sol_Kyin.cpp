#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int g_n;

bool cmp (string a, string b);

vector<string> solution(vector<string> strings, int n) {
    vector<string> ret = strings;
    g_n = n;
    sort(ret.begin(), ret.end(), cmp);
    return ret;
}

bool cmp (string s1, string s2) {
    if (s1[g_n] != s2[g_n]) 
        return s1[g_n] < s2[g_n];
    else 
        return s1 < s2;
}
