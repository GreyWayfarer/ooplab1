#include <iostream>
using namespace std;

int main() {

    int n = 10, m = 10, *p, **a, i, j, M = n * m;
    /*a = (int*)malloc(n * m * sizeof(int));
    

    n = 0;
    p = (int*)malloc(40000 * sizeof(int));
    */
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
    n = 0;
    /*for (i = 0; i < 199; i++) {
        for (j = 0; j < 199; j++) {
            a[n][num] = p[n];
            n++;
            num--;
        }
    }

    for (i = 0; i < 199; i++) {
        while (j < n) {
            a[n][m] = p[n];
            n++;
            m++;
        }
        m
    */
    i = 0;
    m = 0; 
    for (j = 0; j < 10; j++) {
        n = 0;
        while (m <= 10) {
            p[i] = a[n][m];
            i++;
            n++;
            m++;
        }
        m = 9 - j;
    }
    cout << i;
    cout << endl;

    for(i = 0; i < 10; i++) {
        cout << endl;
        for (j = 0; j < 10; j++) {
            cout << a[i][j] << "\t";
        }
    }
    cout << endl;

    for (i = 0; i < 100; i++) {
        cout << p[i] << " ";
    }
        cout << endl;
    return 0;
}


for(i = 10; i >=0; i--) {

    while (n <= 10) {
        
