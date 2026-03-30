class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (auto s : strs) {
            int freq[26] = {0};

            for (auto c : s) {
                freq[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key = key + to_string(freq[i]) + ',';
            }
            m[key].push_back(s);
        }
        vector<vector<string>> result;

        for (auto x : m) {
            result.push_back(x.second);
        }

        return result;
    }
};