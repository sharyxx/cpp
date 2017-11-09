#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void star(int n) {
	
	for (int i=1; i<=n; i++) {
		
		for (int j = i; j <= n - 1; j++) {
			//loop for space
			cout << " ";
		}
		for (int x = 0; x < i;x++){
			//loop for hash
			cout << "#";
		}
		cout << endl;
	}
}

int main() {
	int x;
        cin >>x;     
	star(x);
	return 0;
}
/*
*/
