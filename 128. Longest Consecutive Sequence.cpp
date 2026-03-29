class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlength = 0;
        unordered_map<int, int> m;

        for (auto x : nums) {
            m[x] = 1;
        }

        for (auto x : m) {
            int num = x.first;
            int count = 1;

            if (m.find(num - 1) == m.end()) {

                int curr = num;

                while (m.find(curr + 1) != m.end()) {
                    curr++;
                    count++;
                }
                maxlength = max(maxlength, count);
            }
        }
        return maxlength;
    }
};