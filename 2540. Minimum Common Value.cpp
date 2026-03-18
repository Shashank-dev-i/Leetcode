
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_set<int> st;
        for(int i = 0; i<n1 ; i++){
            st.insert(nums1[i]);
        }

        for(int j = 0; j<n2 ; j++){
            if(st.find(nums2[j]) != st.end()){
                return nums2[j];
            }
        }
        return -1;
    }
};