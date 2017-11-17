
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;



void expo(){

double n = 0, p = 0;
	cin >> n >>p;
         cout<<ios::fixed;
	cout<< pow(n,p)<<endl;
}
int main (){

//int n =0 ,p = 0;
	
	for (int i = 0 ; i< 6 ; i++){
		
		expo ();
		cout<<i<<" iterations"<<endl;
	}
}



