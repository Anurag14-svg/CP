class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int i = 0 ; 
        int j = 0;
        
        
        while(i < nums.size() && j < nums.size()){
            while(nums[i] < 0 ) i++;
            while(nums[j] > 0) j++;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            
            i++;
            j++;
        }
        
        return ans;
    }
};
