class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        int sum = 0;

        for(int i = 0 ; i<n ; i++){
            m[nums[i]]++;
        }

        for(auto x:m){
            if(x.second ==1){
                sum = sum + x.first;
            }
        }
        return sum;
    }
};
