class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int , int> mp;
        int sum = 0;
        // for(auto n:nums) mp[n]++;
        // for(auto m : mp){
        //     if(m.second < 2) sum+= m.first;
        // }
        
        for(auto m : nums){
            int count = ++mp[m];
            sum += count == 1 ? m : count==2 ? -m : 0;
        }
        
        return sum;
    }
    
};
