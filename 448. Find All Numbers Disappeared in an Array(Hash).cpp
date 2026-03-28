class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector <int> result;
        unordered_map<int,int> m;
        for(int i = 0 ; i<n ; i++){
            m[nums[i]]++;
        }

        for(int i = 1; i<=n ; i++){
            if(m.find(i) == m.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};