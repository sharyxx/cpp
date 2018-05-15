#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

void ac (int a[], int b[]){
   
    int pa = 0 , pb = 0;
    for (int i=0;i<3;i++){
        if (a[i]>b[i]){
            pa += 1;
            }
            else if(a[i]<b[i]){
                pb += 1;
                }
                else{continue;}
        } 
        cout<<pa<<" "<<pb;
    }
    
    
    int main(){
        
        int a[3];
        int b[3];
        
         //cout<<"a[]\n";
    for (int i = 0 ; i < 3; i++){
        cin >> a[i];
        }
   // cout<<"\nb[]\n";
    for (int i = 0 ; i < 3; i++){
        cin >> b[i];
        }
 
        ac(a,b);
        }
