class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        unordered_set<int> st;

        for(int i = 0 ; i<n ; i++){
            m[arr[i]]++;
        }

        for(auto x: m){
            if(st.find(x.second) != st.end()){
                return false;
            }
            st.insert(x.second);
        }
        return true;
    }
};