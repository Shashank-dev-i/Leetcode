#include <map>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        int i;
        int n = nums.size();
        for(i = 0 ; i< n ; i++){
            m[nums[i]]++;
        }
        for(int i = 0 ; i <= n ; i++){
            if(m[i] == 0){
                return i;
            }
        }
        return -1;
    }
};