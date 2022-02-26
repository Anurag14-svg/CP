class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(auto n : nums){
            if(i==0 || i==1||nums[i-2] != e){
                nums[i] = e;
                i++;
            }
        }
        
        return i;
    }
};

// Here we are checking whether for the current element currele - 2 index has the same value or not if yes then nothing but if different then swap 
