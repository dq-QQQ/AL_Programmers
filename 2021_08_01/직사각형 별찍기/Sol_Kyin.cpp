/* ********************************************** */
/*   WHERE : PROGRAMMERS                          */
/*                                                */
/*   WHAT : 직사각형 별찍기                           */
/*                                                */
/*   WHO : kyujinlee(kyin) <kjsl4tw@naver.com>    */
/*                                                */
/*   WHEN : 2021-08-01                            */
/* ********************************************** */

#include <iostream>

using namespace std;

int print_star(int, int);

int main(void) {
    int width;
    int height;
    cin >> width >> height;
    if (print_star(width, height) == -1)
        cout << "ERROR" << endl;
    return (0);
}

int print_star(int wid, int hei){
    int w_idx , h_idx = -1;
    
    if (0 >= wid || wid > 1000 || 0 >= hei || hei > 1000)
        return (-1);
    while (++h_idx < hei){
        w_idx = -1;
        while (++ w_idx < wid){
            cout << "*";
        }
        cout << "\n";
    }
    return (0);
}
