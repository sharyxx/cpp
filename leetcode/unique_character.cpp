#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:

    int firstUniqChar(string s) {
     map <char, int> a;
        for (int i = 0 ; i< s.length();i++){
            a[s[i]]++;
        }

        for (int i = 0 ; i< s.length();i++){
           if(a[s[i]]==1){
               return i;
           }

        }

        return -1;
    }
};


int main (){
    string x = "llettcc";
    Solution in;
    
    cout<<in.firstUniqChar(x);
}





