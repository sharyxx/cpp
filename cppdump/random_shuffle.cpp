#include <iostream>
#include <algorithm>
using namespace std;


int main (){

int cornerMoves[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};// {'1', '2', '3', '4','5','6','7','8','9','10','11','12','13','14','15','16'};
random_shuffle(&cornerMoves[0], &cornerMoves[15]);

for (int i = 0 ; i < 10 ; i++){

	cout<< cornerMoves[i]<<" ";
}
cout<<"\n";
}
