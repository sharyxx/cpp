nclude <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}

#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

void bal(){

	float a [12];
	float temp = 0 ;
	int x = 0;
	while (x != 12){
		cin>> a[x];
		x++;
	}	
     temp = 0 ;
	for (int i = 0 ; i< 12 ; i++){

		temp += a [i];
	}

	cout<< "$"<<temp/12;
}

int main (){

//int n =0 ,p = 0;

        bal ();


}
