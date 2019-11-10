#include <iostream>
using namespace std;

int main() {

    int n = 10, m = 10, *p, **a, i, j, M = n * m, x = 0, c1, c2, r1, r2, **c;
    
/*    a = new int * [n];
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



    n = 0, m = 0;//task 1.b. m - rows, n - colls; works
    for (i = 1; i <= 9; i++) {
        for (n; n >= 0; n --) {
            p[x] = a[m][n];
            m++;
            x++;
        }
        m = 0;
        n = i;
    }
    for (i = 1; i <=9; i++) {
        for (m; m <= 9; m++) {
            p[x] = a[m][n];
            n--;
            x++;
        }
        m = i;
        n = 9;
    }
    m = 9; n = 9;
    p[x] = a[m][n];//task 1.b


    m = 0, n = 9;//task 1.a works
    for (i = 8; i >= 0; i--) {
        for (n;n <= 9; n++) {
            p[x] = a[m][n];
            m++;
            x++;
        }
        n = i;
        m = 0;
    }
    for (i = 1; i <=9; i++) {
         while (m <= 9) {
             p[x] = a[m][n];
             m++;
             n++;
             x++;
         }
         m = i;
         n = 0;
    }
    m = 9; n = 0;
    p[x] = a[m][n];//task 1.a

    n = 9;//task 1.c works
    for (j = 0; j <= n/2; j++) {
        c1 = n/2 - j;
        c2 = n/2 + j + 1;
        r1 = n/2 - j;
        r2 = n/2  + j + 1;
        for (i = c1; i < c2; i++) {
            p[x] = a[r1][i];
            x++;
        }
        for (i = r1; i < r2; i++) {
            p[x] = a[i][c2];
            x++;
        }
        for (i = c2; i > c1 - 1; i--) {
            p[x] = a[r2][i];
            x++;
        }
        for (i = r2; i > r1 - 1; i--) {
            p[x] = a[i][c1 - 1];
            x++;
        }
    }//task 1.c

    n = 9;//task 1.d works
    for (j = 0; j <=n/2; j++) {
        c1 = j;
        c2 = n - j;
        r1 = j;
        r2 = n - j;
        for (i = c1; i < c2; i++) {
            p[x] = a[r1][i];
            x++;
        }
        for (i = r1; i < r2; i++) {
            p[x] = a[i][c2];
            x++;
        }
        for (i = c2; i > c1; i--) {
            p[x] = a[r2][i];
            x++;
        }
        for (i = r2; i > r1; i--) {
            p[x] = a[i][c1];
            x++;
        }
    }


    for (i = 0; i < 100; i++) {
        cout << p[i] << " ";
    }
        cout << endl;*/


    /*task 2*/ //m.b. works

    n = 10, m = 10;
    c = new int * [n];
    for (i = 0; i < n; i++) {
        c[i] = new int [m];
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < (m = rand() % 10); j++) {
            c[i][j] = rand() % 20;
            cout << c[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}
