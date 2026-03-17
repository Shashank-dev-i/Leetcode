#include <map>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        map<int,int> m;
        vector<int> ans;
        for(int i = 0 ; i<n1 ; i++){
            m[nums1[i]] = 1;
        }
        for(int j = 0 ; j<n2 ; j++){
            if(m[nums2[j]] == 1){
                ans.push_back(nums2[j]);
                m[nums2[j]] = 0;
            }
        }
        return ans;
    }
};