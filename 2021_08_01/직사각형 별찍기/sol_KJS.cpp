#include <iostream>

using namespace std;

int main(void) {
    int n=0, m=0;
    cin >> n >> m;
    for(int y=0;y<m;++y){
        for(int x=0;x<n;++x)
            cout << "*";
        cout << "\n";
    }
    
    return 0;
}