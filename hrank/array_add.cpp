#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int *a = NULL;
	int b;
	cin >> b;
	int temp = 0;
	a = new  int[b];

	for (int i = 0; i<b; i++) {

		cin >> a[i];
		temp += a[i];

	}

	cout << temp;

	delete[] a;
}
