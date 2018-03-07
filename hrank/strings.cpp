/**
**https://www.hackerrank.com/challenges/c-tutorial-strings/problem
**/
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;


int sct () {

	string s1, s2, s3;
	char a;
	getline (cin,s1);
	getline (cin,s2);
    cout<< s1.size() <<" ";
    cout<< s2.size() <<" \n";
    cout<< s1+s2<<"\n";
    a = s1.at(0);
    s1.at(0) = s2.at(0) ;
    s2.at(0) = a;
    cout<<s1<<" "<<s2;
    return  0 ;


}



int main (){


	sct();
}
