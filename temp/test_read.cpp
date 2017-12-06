#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



	int main() {
		char s[50];
		std::ifstream temp;
		temp.open("a.txt"); // could ignore std::ifstream::in
			

  if (!temp.is_open()){

  	exit(EXIT_FAILURE);
  }

	else { 
		while(temp.good()){
			temp >> s; 
			cout<<s<<" ";
				
		}
		}//readData(state, temp);
		temp.close();
	}



