class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         std::map <char,int> ransommap;
        int count = 0;
        //loop to store in hash
        for (int i = 0; i< magazine.length();i++){
            ransommap[magazine[i]]++;
        }
        //subtract again from the map which was stored from magazine with the ransomNote 
        // and if it is less than 0, return false.
        for (int i = 0; i< ransomNote.length();i++){
            ransommap[ransomNote[i]]--;
            if(ransommap[ransomNote[i]]<0){
                return false;
            }
        }
        return true;
    }
};
