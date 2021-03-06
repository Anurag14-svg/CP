class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ;i++){
            int m = abs(nums[i]) -1 ;
            nums[m] = nums[m] > 0 ? -nums[m] : nums[m];
        }
        
        for(int j = 0 ; j < nums.size() ; j++){
            if(nums[j] > 0) ans.push_back(j+1);
        }
        
        return ans;
    }
};

// A simple logic of negative marking if the elements with the range of 0 - length of araay are given then obviously negative marking will help because the elements are given in the range of the length
