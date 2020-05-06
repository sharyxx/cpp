class Solution {

public:
    int tobinary(int num){
        if (num==1){
            return 0;
        } 
            else{
                while (num>0){
                return tobinary(num/2)*10+num%2;
                    
        }
        
    }
        return num;
    }
    
    int findComplement(int num) {
       int dec;
        dec = tobinary(num);

    }

return dec;        
    
};

int main (){

    Solution a;

   cout<< a.findComplement(5);
}
