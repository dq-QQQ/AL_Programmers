#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    answer.push_back(arr[0]);
    for (int idx = 0; idx < arr.size(); ++idx)
        if (answer.back() != arr[idx])
            answer.push_back(arr[idx]);

    return answer;
}