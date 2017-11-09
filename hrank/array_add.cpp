#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        long *a = NULL;
        long b;
        cin >> b;
        long temp = 0;
        a = new  long[b];

        for (int i = 0; i<b; i++) {

                cin >> a[i];
                temp += a[i];

        }

        cout << temp;

        delete[] a;
}

