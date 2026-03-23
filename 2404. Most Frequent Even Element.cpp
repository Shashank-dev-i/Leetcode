class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        int ans = -1;
        int maxfreq = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                m[nums[i]]++;
            }
        }

        for (auto x : m) {

            if (x.second > maxfreq) {
                maxfreq = x.second;
                ans = x.first;
            } else if (x.second == maxfreq) {
                ans = min(ans, x.first);
            }
        }
        return ans;
    }
};