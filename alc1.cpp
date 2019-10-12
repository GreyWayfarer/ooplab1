#include <iostream>
using namespace std;

int main() {

    int n = 10, m = 10, *p, **a, i, j, M = n * m, x = 0;
    
    a = new int * [n];
    for (i = 0; i < n; i++) {
        a[i] = new int [m];
    }

    p = new int [M];
    for (i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            a[i][j] = rand() % 20;
        }
    }


    for(i = 0; i < 10; i++) {
        cout << endl;
        for (j = 0; j < 10; j++) {
            cout << a[i][j] << "\t";
        }
    }
    cout << endl;



    n = 0, m = 0;//task 1.b. m - rows, n - colls;
    for (i = 1; i <= 9; i++) {
        for (n; n >= 0; n --) {
            p[x] = a[m][n];
            m++;
            x++;
        }
        m = 0;
        n = i;
    }
    cout << n << endl;
    for (i = 0; i <=9; i++) {
        n = 9;
        for (m; m <= 9; m ++) {
            p[x] = a[m][n];
            n--;
            x++;
        }
        m = i;
    }
    m = 9; n = 9;
    p[x] = a[m][n];//task 1.b

    for (i = 0; i < 100; i++) {
        cout << p[i] << " ";
    }
        cout << endl;
    return 0;
}
