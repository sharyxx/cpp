#include <unordered_map>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) {
            counter[num]++;
            if (counter[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};

int main (){
   vector <int> nums= {3,3,3,1,6,7};
    Solution a;
cout<< a.majorityElement(nums);
}
