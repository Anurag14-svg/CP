class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> mp;
        unordered_set<int> st;
        
        for(int n : arr){
            mp[n]++;
        }
        
        for(auto m : mp){
            st.insert(m.second);
        }
        
        return mp.size() == st.size();
    }
};
