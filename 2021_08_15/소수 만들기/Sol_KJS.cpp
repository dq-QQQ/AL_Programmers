//문제풀이: https://githubseob.tistory.com/40

#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for (int i = 0; i < nums.size() - 2; ++i) {
        for (int j = i + 1; j < nums.size() - 1; ++j) {
            for (int k = j + 1; k < nums.size(); ++k) {
                int sum = nums[i] + nums[j] + nums[k];
                int cnt = 0;
                for (int l = 1; l <= sqrt(sum); ++l) {
                    if (sum % l == 0) {
                        cnt++;
                    }
                }
                if (cnt == 1) answer++;
            }
        }
    }

    return answer;
}