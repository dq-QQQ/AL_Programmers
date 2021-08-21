//문제풀이: https://githubseob.tistory.com/54

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(),d.end());
    
    for(int idx=0;idx<d.size();++idx){
        if(budget>=d[idx]){
            budget-=d[idx];
            answer++;
        }
    }
    return answer;
}