#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main() {
    int a[10000], b = 0, c, d, e, f, g;
    while (scanf("%d", &a[b]) != EOF) {
        for (int i = 0; i <= b; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] > a[i]) {
                    int tt = a[j];
                    a[j] = a[i];
                    a[i] = tt;
                }
            }
        }
        if (b % 2 == 0) {
            c = b / 2;
            cout << a[c] << endl;
        }
        else if (b % 2 == 1) {
            c = b / 2;
            d = (a[c] + a[c + 1]) / 2;
            cout << d << endl;
        }
        b = b + 1;
    }
    return 0;
}

