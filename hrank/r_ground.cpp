#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // function to solve the ported value
    
     std::vector <int> myvector;
    for (std::vector <int>::iterator it =  grades.begin();it!=grades.end();it++ ){
        
        if (*it < 40 || *it % 5 == 0 ){
            myvector.push_back( *it );
            } else{
    myvector.push_back( ((*it + 5/2)/5)*5);
    }
    
}
return myvector;
}



int main() {

    //allocating dynamic vector size and looping to input in vector
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }


    //parsing the solved grades into the vector result
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;

    return 0;
}

