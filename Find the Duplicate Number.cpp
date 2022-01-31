class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int> mp;
        for(int i = 0 ;i < nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                return nums[i];
            }
            mp[nums[i]] = i;
        }
        
        return -1;
    }
};


// The above solution is the very naive solution it is using the extra space of O(N) and time of O(N) and does not modifying the array;


// A better solution could be treating it like a linked list and detect a cycle; 

// class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        
        }while(slow!=fast);
        
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};

// we are only able to do this because it is given that atleast one duplicate is present in the array and the elments will also range from 1 to n where n+1 is the size of the array
// So it was very obvious that at some point there will definitely form a cycle ;;;
