class Solution {
public:
    //using map
    int numJewelsInStones(string J, string S) {
        map <char,int> s;
        int num_of_stone = 0;
        for (int i = 0; i< S.length();i++){
            
          s[S[i]]++;
            
        }
          for(int i =0; i<J.length();i++){
              num_of_stone += s[J[i]];
            }
    return num_of_stone;
    }
};
