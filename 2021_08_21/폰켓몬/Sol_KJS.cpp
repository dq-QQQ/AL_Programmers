//문제풀이: https://githubseob.tistory.com/50

#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int max_cnt=nums.size()/2;
    sort(nums.begin(),nums.end());
    for(int idx=0;idx<nums.size()-1;){
        if(nums[idx]==nums[idx+1]) nums.erase(nums.begin()+idx+1);
        else idx++;
    }
    int nums_size=nums.size();
    return min(max_cnt,nums_size);
}