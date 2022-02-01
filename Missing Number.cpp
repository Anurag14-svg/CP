// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


Now the array contains only distict elements 

so if the array is sorted then we can definitely use binay search like if the mid index is equal to nums[mid] this way we can find the missing element 

But the array is not sorted so we can use like 3 - 4 methods here 


1. using a hashmap create a hashmap first for array and insert every element in th hash map then loop for 0 t0 n and check if n is present in hash or not if not then return it 

2. using x or 
  
3. using the sum property 

The answer will be sum from 0 to n - sum of the array;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long n = nums.size();
        return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);
    }
};

// This solution is done in O(N) time and O(1) space complexity;
