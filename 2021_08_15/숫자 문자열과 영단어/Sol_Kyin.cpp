/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 숫자 문자열과 영단어                       */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-15                            */
/* ********************************************** */

#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>

using namespace std;

char dict(int *, string);

int solution(string str) {
    int idx = 0;
    string arr;
    
    while (idx < str.size()){
        if (isdigit(str[idx])) 
            arr.push_back(str[idx++]);
        else  
            arr.push_back(dict(&idx, str));
    }
    return (stoi(arr));
}

char dict(int *idx, string str){
    switch (str[*idx]){
        case 'z': *idx += 4; return '0';
        case 'o': *idx += 3; return '1';
        case 't':
            (*idx)++;
            if (str[*idx] == 'w') {*idx += 2; return '2';}
            if (str[*idx]== 'h') {*idx += 4; return '3';}
        case 'f':
            (*idx)++;
            if (str[*idx] == 'o') {*idx += 3; return '4';}
            if (str[*idx] == 'i') {*idx += 3; return '5';}
        case 's':
            (*idx)++;
            if (str[*idx] == 'i') {*idx += 2; return '6';}
            if (str[*idx] == 'e') {*idx += 4; return '7';}
        case 'e': *idx += 5; return '8';
        case 'n': *idx += 4; return '9';
    }    
}
