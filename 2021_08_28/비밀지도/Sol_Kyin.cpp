#include <string>
#include <vector>

using namespace std;

vector<int> Bi_Or_Operation(int n, int idx1, int idx2);
vector<string> Bi_To_Str(vector <vector<int>> arr,int n);

vector<string> solution(int n, vector<int> arr1, vector<int> arr2){
    vector<string> ret;
    vector <vector<int>> tmp;
    int idx = -1;
    
    while (++idx < n)
        tmp.push_back(Bi_Or_Operation(n, arr1[idx], arr2[idx]));
    
    ret = Bi_To_Str(tmp, n);
    
    return ret;
}

vector<int> Bi_Or_Operation(int n, int idx1, int idx2){
    int i = -1;
    vector<int> ret, tmp1, tmp2;
    
    while (++i < n){
        tmp1.push_back(idx1 % 2);
        tmp2.push_back(idx2 % 2);
        idx1 /= 2;
        idx2 /= 2;
    }
    
    i = -1;
    while (++i < n){
        if (tmp1[i] == 1 || tmp2[i] == 1)
            ret.push_back(1);
        else
            ret.push_back(0);
    }
    return ret;
}

vector<string> Bi_To_Str(vector <vector<int>> arr,int n){
    int idx1 = -1, idx2;
    vector<string> ret;
    string tmp = "";
    
    while (++idx1 < n){
        idx2 = n;
        while (--idx2 >= 0){
            if (arr[idx1][idx2] == 1)
                tmp.push_back('#');
            else
                tmp.push_back(' ');
        }
        ret.push_back(tmp);
        tmp.clear();
    }
    return ret;
}
