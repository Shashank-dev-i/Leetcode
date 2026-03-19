using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }

        int ans = 0;

        for(int i = 1; i <= 100; i++){
            int f = m[i];
            if(f > 1){
                ans += (f * (f - 1)) / 2;
            }
        }
        return ans;
    }
};