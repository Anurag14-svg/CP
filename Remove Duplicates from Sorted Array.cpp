class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; 
        for(auto n : nums){
            if(!i || n>nums[i-1]){
                nums[i++] = n;
            }
        }
        return i;
        
    }
};


// Understable code

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i = 0 ; 
        for(int j = 0 ; j < nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        
        return i+1;
    }
};
