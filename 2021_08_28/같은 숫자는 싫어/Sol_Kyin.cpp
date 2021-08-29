#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> ret;
    int idx = 0;
    
    ret.push_back(arr[0]);
    while (++idx < arr.size())
        if (arr[idx - 1] != arr[idx])
            ret.push_back(arr[idx]);
    return ret;
}
