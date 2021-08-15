//문제풀이: https://githubseob.tistory.com/38

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string num = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'z') {
            num.push_back('0');
            i += 3;
        }
        else if (s[i] == 'o') {
            num.push_back('1');
            i += 2;
        }
        else if (s[i] == 't') {
            if (s[i + 1] == 'w') {
                num.push_back('2');
                i += 2;
            }
            else {
                num.push_back('3');
                i += 4;
            }
        }
        else if (s[i] == 'f') {
            if (s[i + 1] == 'o') {
                num.push_back('4');
                i += 3;
            }
            else {
                num.push_back('5');
                i += 3;
            }
        }
        else if (s[i] == 's') {
            if (s[i + 1] == 'i') {
                num.push_back('6');
                i += 2;
            }
            else {
                num.push_back('7');
                i += 4;
            }
        }
        else if (s[i] == 'e') {
            num.push_back('8');
            i += 4;
        }
        else if (s[i] == 'n') {
            num.push_back('9');
            i += 3;
        }
        else num.push_back(s[i]);
    }
    return stoi(num);
}