class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> m;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

        for (auto x : m) {
            if (x.first == x.second) {
                ans = max(x.first, ans);
            }
        }
        return ans;
    }
};